#include <NDL.h>
#include <SDL.h>

#define keyname(k) #k,


int key_num = SDLK_PAGEDOWN + 1;
int key_string_length[SDLK_PAGEDOWN + 1] = {-1};
static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

uint8_t key_state [SDLK_PAGEDOWN] = {};

int sdl_eventHandle(char * key_buf,SDL_Event *event) {
  if(key_string_length[0] == -1) {
    for(int i = 0;i<= SDLK_PAGEDOWN ; i++) {
      key_string_length[i] = strlen(keyname[i]);
    }
  } 
   if(memcmp("kd",(void*)key_buf,2) == 0) {
      event->type = SDL_KEYDOWN;
    }else if(memcmp("ku",(void*)key_buf,2) == 0){
      event->type = SDL_KEYUP;
    }else {
      event->type = SDL_NONE;
      event->key.keysym.sym = 0;
      return 0;
    }
    int sb_length = strlen(&(key_buf[3])) ;
    int sunm_length;
    for(int i =  0;   i< key_num;i++) {
      sunm_length = sb_length >= key_string_length[i]?sb_length:key_string_length[i];
      if(memcmp(&(key_buf[3]),keyname[i],sunm_length) == 0) {
        event->key.keysym.sym = i;
        // printf("do key is %s\n",keyname[i]);
        if(event->type == SDL_KEYDOWN) {
          key_state[i] = 1;
        }else if(event->type == SDL_KEYUP) {
          key_state[i] = 0;
        }
        
        // printf("gets is %s\n",key_buf);
        // printf("value is %d\n",event->key.keysym.sym);
        return 1;
      }
    }
    return 0;
}
int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  // return 0;
  char key_buf[100] = {};
  NDL_PollEvent(key_buf,20);
  if(sdl_eventHandle(key_buf,ev) == 1) {
    printf("key buf is %s\n",key_buf);
    return 1;
  }
  return 0;
}

//目前只实现了对于按键的响应

int SDL_WaitEvent(SDL_Event *event) {

  char key_buf[100] = {};
  while(1) {
    NDL_PollEvent(key_buf,20);
    if(sdl_eventHandle(key_buf,event) == 1) {
      return 1;
    }
  }
 
  // return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  // return NULL;
  return key_state;
}
