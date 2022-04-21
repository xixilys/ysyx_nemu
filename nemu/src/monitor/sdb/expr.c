#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ,
  TK_NORMAL_NUM


  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
  {"[0-9]+",TK_NORMAL_NUM},
  {"\\)",')'},
  {"\\(",'('},       
  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"==", TK_EQ},        // equal
  {"\\-",'-'},          // minus
  {"\\/",'/'},          // slash
  {"\\*",'*'}           //multiply
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

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
          case TK_NOTYPE:break;
          default:{
                  tokens[nr_token].type = rules[i].token_type;
                  for(int num = 0;num < substr_len;num++) {
                    tokens[nr_token].str[num] = substr_start[num];
                  }
                  tokens[nr_token].str[substr_len] = '\0';
                  //printf("nrtoken is %d\n and tokenstype is %d\n",nr_token,tokens[nr_token].type);
                  nr_token++;
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
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
   // printf("here is %d\n",start);
   //printf("start = %d and end = %d\n",start,end);
    if(tokens[start].type == TK_NORMAL_NUM){
     // printf("value is %d\n",atoi(tokens[start].str));
      return atoi(tokens[start].str);
    }else {
       panic("the expression tokens is wrong\nand so I don't know why\nbecause not a number\n");    
    }
  }
  else if (heck_parentheses(start, end) == true) {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    //printf("start = %d and end = %d\n",start,end);
    return evaluate_the_expression(start + 1, end - 1);
  }
  else {
    
    int op = find_the_main_character(start,end);
   // printf("start = %d and end = %d\n",start,end);printf("main is %d\n",op);
    int a = evaluate_the_expression(start,op-1);
    int b = evaluate_the_expression(op+1,end);
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
      }
      
     
      default : printf("wrong char here %d\n",tokens[op].type) ;
                assert(0);
    }
    /* We should do more things here. */
  }
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

  for(i = start; i <= end;i++) {
    if(tokens[i].type == '('){
      kuohao_num ++;
    }
    else if(tokens[i].type == ')'){
      kuohao_num --;
    }
    if(tokens[i].type < TK_NORMAL_NUM) {
      if(kuohao_num != 0) {
          value = value; 
         // printf("kuohao_num = %d i =%d\n",kuohao_num,i);
      }else if(tokens[i].type == '+' || tokens[i].type == '-') {
        if(i-start <= 1 || end - i <= 1) {
          temp_type = tokens[i].type;
          value = i;
        }else {
          temp_type = tokens[i].type;
          value = i;
        }
        
      }else if(tokens[i].type == '*'|| tokens[i].type == '/') {
          if(temp_type != '+'&& temp_type != '-') {
            temp_type = tokens[i].type;
            value = i;
          }
          
      }
      //printf("i = %d and value =%d\n",i,value);
    }
    //printf("i = %d, type = %d value =%d kuohao_num = %d\n",i,temp_type,value,kuohao_num);
  }
  if(kuohao_num != 0) {
    return -1;
  }
 // printf("start = %dand end =%d and value = %d\n",start,end,value);
  return value;
}

