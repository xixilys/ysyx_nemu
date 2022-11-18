#include <NDL.h>
#include <SDL.h>

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  return 0;
}
//目前只实现了对于按键的响应
int key_num = SDLK_PAGEDOWN + 1;

int key_string_length[SDLK_PAGEDOWN + 1] = {-1};
int SDL_WaitEvent(SDL_Event *event) {
  char key_buf[100] = {};
  NDL_PollEvent(key_buf,20);
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
  for(int i =  0; i< key_num;i++) {
    if(memcmp(&(key_buf[3]),keyname[i],key_string_length[i]) == 0) {
      event->key.keysym.sym = i;
      // printf("gets is %s\n",key_buf);
      // printf("value is %d\n",event->key.keysym.sym);
      return 0;
    }
  }
  return 0;
  // return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  return NULL;
}
