#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include <memory/vaddr.h>

enum {
  TK_NOTYPE = 256, TK_EQ,TK_AND,TK_NOEQ,
  TK_POINT,TK_VARAY,TK_NORMAL_NUM


  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
  {"0[xX][0-9a-fA-F]+",TK_NORMAL_NUM},
  {"[0-9]+",TK_NORMAL_NUM},
  {"\\$[a-zA-Z_]+[a-zA-Z0-9_]*",TK_VARAY},
  {"\\)",')'},
  {"\\(",'('},       
  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"==", TK_EQ},        // equal
  {"\\-",'-'},          // minus
  {"\\/",'/'},          // slash
  {"\\*",'*'},           //multiply or point,when make tokens ,we see all * as multiply
  {"&&",TK_AND},    //and 
  {"!=",TK_NOEQ}
  
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};
word_t evaluate_the_expression(int start,int end);
bool heck_parentheses(int a, int b) ;
int find_the_main_character(int start,int end);

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;
  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[800000] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;
  memset(&tokens,0,32*sizeof(Token));
  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;//because the rm_so = 0

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;
        
        switch (rules[i].token_type) {
          case TK_NOTYPE:break;
          default:{
                if(tokens[nr_token].type != TK_POINT) {
                   tokens[nr_token].type = rules[i].token_type;
                }
                
                if (tokens[nr_token].type == '*' && (nr_token == 0 || tokens[nr_token- 1].type == '+' ||tokens[nr_token - 1].type == '-'||
                  tokens[nr_token-1].type == '*' ||tokens[nr_token-1].type == '/' || tokens[nr_token-1].type == '(' || tokens[nr_token-1].type == TK_EQ ||
                  tokens[nr_token-1].type == TK_AND || tokens[nr_token-1].type == TK_NOEQ) ){
                  tokens[nr_token].type = TK_POINT;
                }else {
                  for(int num = 0;num < substr_len;num++) {
                    tokens[nr_token].str[num] = substr_start[num];
                  }
                  tokens[nr_token].str[substr_len] = '\0';
                  //printf("nrtoken is %d\n and tokenstype is %d\n",nr_token,tokens[nr_token].type);
                  nr_token++;
                }
                
          }
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
  return true;
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  *success = true;
  // for (int i = 0; i < nr_token; i ++) {
  //   if (tokens[i].type == '*' && (i == 0 || tokens[i - 1].type == '+' ||tokens[i - 1].type == '-'||
  //  tokens[i-1].type == '*' ||tokens[i-1].type == '/' || tokens[i-1].type == '(' || tokens[i-1].type == TK_EQ ||
  //  tokens[i-1].type == TK_AND || tokens[i-1].type == TK_NOEQ) ){
  //   tokens[i].type = TK_POINT;
    
  //   } 
  // }

  // for(int i = 0;i < nr_token;i++) {
  //   printf("num %d type is %d\n",i,tokens[i].type);
  // }
  word_t temp = 0;
  temp = evaluate_the_expression(0,nr_token-1);
  return temp;
}

word_t evaluate_the_expression(int start,int end) {
  if (start > end) {
    /* Bad expression */
    printf("start = %d and end = %d\n",start,end);
    panic("the expression tokens is wrong\nand so I don't know why\nbecause start > end\n");    
  }
  else if (start == end) {
    if(tokens[start].type == TK_NORMAL_NUM ){
      if(tokens[start].str[0]=='0' && (tokens[start].str[1] == 'x' || tokens[start].str[1] == 'X')) {
       
        return strtoul(tokens[start].str,NULL,16);
      }else {
     // printf("value is %d\n",atoi(tokens[start].str));
      return atol(tokens[start].str);
      } 
    }else if(tokens[start].type == TK_VARAY){
      if(tokens[start].str[0] == '$' ) {
        bool reg_type;
        word_t temp_value = isa_reg_str2val((&tokens[start].str[1]), &reg_type);
        if(reg_type == false) {
          printf("%s not reg!!! ",&tokens[start].str[1]);
        }
        else {
          printf("reg %s is %ld\n",&tokens[start].str[1],temp_value);
          return temp_value;
        }
      }
    } else if(tokens[start].type == TK_POINT){
      word_t temp_t =strtoul(tokens[start].str,NULL,16);
      return vaddr_read(temp_t,8);
    } 
  }
  else if (heck_parentheses(start, end) == true) {
    //printf("start = %d and end = %d\n",start,end);
    return evaluate_the_expression(start + 1, end - 1);
  }
  else {
    int op = find_the_main_character(start,end);
   // printf("start = %d and end = %d\n",start,end);printf("main is %d\n",op);
    word_t a = evaluate_the_expression(start,op-1);
    word_t b = evaluate_the_expression(op+1,end);
   //printf("start = %d and end = %d\n",start,end);
    //printf("a = %d && b = %d && type = %d\n",a,b,tokens[op].type);
    switch(tokens[op].type) {
      case '+' :return a + b;
      case '-' :return a - b;
      case '*' :return a * b;
      case '/' :{
        if(b == 0 ) {
          panic("cannot evaluate expression,the denominator is zero \n");
        }
        return a / b;
      };break;
      case TK_EQ:return a == b;
      case TK_AND:return a && b;
      case TK_NOEQ:return a != b;
      default : printf("wrong char here %d\n",tokens[op].type) ;
                assert(0);
    }
  }
  return 0;
}

bool heck_parentheses(int a, int b) {
  int i = a;
  int kuohao_num = 0;
  if(tokens[a].type == '(') {
    for(;i<=b;i++) {
      if(tokens[i].type == '(') {
        kuohao_num ++ ;
      }else if(tokens[i].type == ')'){
        kuohao_num -- ;
      }
     // printf("kuohaonum = %d\n",kuohao_num);
      if(kuohao_num == 0 && i != b) {
        return false;
      }
    }
    return true;
  }
  return false;
}


int find_the_main_character(int start,int end) {
  int value = start; 
  int temp_type  = tokens[start].type;//may be num,so be careful
  int i = start;
  int kuohao_num = 0;
 // printf("value = %d ,end = %d\n",value ,end);
  // for(int h = start; h <= end; h++) {
  //   printf("%d\n",tokens[h].type);
  // }
  for(i = start; i <= end;i++) {
    if(tokens[i].type == '('){
      kuohao_num ++;
    }
    else if(tokens[i].type == ')'){
      kuohao_num --;
    }
     //printf("kuohao_num = %d i =%d value = %d\n",kuohao_num,i,value);
    if(tokens[i].type != TK_NORMAL_NUM && tokens[i].type != TK_POINT) {
      if(kuohao_num != 0) {
        value = value; 
       
      }else if(tokens[i].type == TK_AND) {
        temp_type = tokens[i].type;
        value = i;
      }else if(temp_type == TK_AND) {
        value = value;
      }else if(tokens[i].type == TK_EQ || tokens[i].type == TK_NOEQ){
        temp_type = tokens[i].type;
        value = i;
      }else if(temp_type == TK_EQ || temp_type ==TK_NOEQ) {
        value = value;
      }else if(tokens[i].type == '+' || tokens[i].type == '-') {
        temp_type = tokens[i].type;
        value = i;
      }else if(temp_type == '+'||temp_type == '-') {
        value = value;
      }else if(tokens[i].type == '*'|| tokens[i].type == '/') {
        temp_type = tokens[i].type;
        value = i;
      }  
    } //printf("i = %d and value =%d\n",i,value);//printf("i = %d, type = %d value =%d kuohao_num = %d\n",i,temp_type,value,kuohao_num);
  }
  if(kuohao_num != 0) {
    return -1;
  }
  //printf("start = %dand end =%d and value = %d\n",start,end,value);
  return value;
}

