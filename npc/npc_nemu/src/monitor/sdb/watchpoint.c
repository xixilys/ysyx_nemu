#include <cpu/sdb.h>

#define NR_WP 32

static WP wp_pool[NR_WP] = {};
WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    //printf("NO = %d\n",i);
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }
  head = NULL;
  //free_ = &wp_pool[0];
  //printf("I am shabi\n");
  // while(free_->next != NULL) {
  //   printf("NO = %d\n",free_->NO);
  //   free_ = free_->next;
  // }
  free_ = wp_pool;
}

WP* new_wp() { 
  WP* p ;
  p = head;
  if(p == NULL) {
    head = free_ ;
    p = head;
    free_ = free_ ->next;
    p->next = NULL;
    p->NO = 0;
    memset(p->str,0,1000*sizeof(char));
    return head;
  } else { 
    while(p->next != NULL) {
      if(p == NULL) {
        printf("shabi p == NULL\n");
        assert(0);
      } 
      p =  p->next;
    }
    printf("this no is %d\n",p->NO);
    p->next = free_ ;
    // while(free_->next != NULL) {
    //   printf("NO = %d\n",free_->NO);
    //   free_ = free_->next;
    // }
    if(free_ == NULL) {
      panic("no free space for the watchpoint");
    }  
    p->next->NO = p->NO + 1;
    free_ = free_ -> next; 
    p->next->next = NULL;
    assert(free_ != NULL);
    memset(p->next->str,0,1000*sizeof(char));
  
  }
  
  
  return p->next;
}


void free_wp(WP *wp) {
  WP* p = head;
  //int temp_i  = 0;
  while(p->next != wp) {
    p = p->next;
    if(p->next == NULL) {
      panic("no this watchpoint!!! \n");
    }
  }
  p->next = wp->next;
  wp->next = free_;
  free_ = wp;
  while(p != NULL){
    p->NO = p->NO - 1; 
    p = p->next;
  }
}

bool delete_wp(int n) {
  WP* p = head;

  while(p!= NULL) {
    if(p->NO == n) {
      free_wp(p);
      return true;
    }
    p = p->next;
    
  }
  return false;
}

/* TODO: Implement the functionality of watchpoint */

