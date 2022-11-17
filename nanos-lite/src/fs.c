#include <fs.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
  size_t do_offset;
} Finfo;




size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t ramdisk_write(const void *buf, size_t offset, size_t len);
size_t serial_write(const void *buf, size_t offset, size_t len);
size_t events_read(void *buf, size_t offset, size_t len) ;
enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB,FD_EVENT};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}


/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, serial_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, serial_write},
  [FD_FB]  = {"/dev/fb",0,0,invalid_read,invalid_write},
  [FD_EVENT]  = {"/dev/events",0,0,events_read,invalid_write},

#include "files.h"
};

int file_num = sizeof(file_table) / sizeof(Finfo);
size_t fs_open(const char *pathname, int flags, int mode) {
  // 目前文件系统还比较简单
  int i = 0;
  for(; i < file_num ; i++) {
    if(memcmp(pathname,file_table[i].name,strlen(pathname)) == 0 ) {
      return i;
    }
  }
  return -1;
}
size_t fs_write(int fd,const void * buf,size_t len) {
  if(file_table[fd].write == NULL) {
    if(file_table[fd].do_offset + len <= file_table[fd].size) {
      size_t has_write_len = ramdisk_write(buf,file_table[fd].disk_offset + file_table[fd].do_offset,len);
      file_table[fd].do_offset += has_write_len;
      return has_write_len;
    }else{
      return -1;
    }
  }else {
    return file_table[fd].write( buf,0,len);
  }
}

size_t fs_read(int fd,const void * buf,size_t len) {
  if(file_table[fd].read == NULL) {
      size_t read_number = (len + file_table[fd].do_offset) >= file_table[fd].size ? (file_table[fd].size -1 - file_table[fd].do_offset ) : len;
      size_t has_read_len = ramdisk_read ((void*)buf,file_table[fd].disk_offset + file_table[fd].do_offset,read_number);
      file_table[fd].do_offset += has_read_len;
      return has_read_len;
  }else {
    return file_table[fd].read((void*)buf,0,len);
  }
  
}
size_t  fs_lseek(int fd,size_t offset,int whence) {
  if( fd >= 3 && fd < file_num) {
      if(offset >= file_table[fd].size) {
        return -1;
      }else {
        switch(whence) {
          case SEEK_SET : if(file_table[fd].size >= offset && offset >= 0) {
            file_table[fd].do_offset = offset;
          }else {
            return -1;
          }
          break;
          case SEEK_CUR : if((file_table[fd].do_offset + offset) <= file_table[fd].size && file_table[fd].do_offset + offset >= 0) {
            file_table[fd].do_offset = offset + file_table[fd].do_offset;
          }else {
            return -1;
          }break;
          case SEEK_END : if((file_table[fd].size    + offset) >= 0 && offset <= 0) {
            file_table[fd].do_offset = offset + file_table[fd].size  ;
          }else {
            return -1;
          }break;
        }
        return file_table[fd].do_offset;
        // file_table[fd].do_offset = offset;
        // return offset;
      }
  }else {
    return -1;
  }
  return -1;
}
size_t fs_close(int fd){
  // if( fd >= 3 && fd < fife_num) {
  //     file_table[fd].do_offset = 0;
  // }else {
  //   return -1;
  // }
  return 0;
}
void init_fs() {
  printf("file size is %d\n",file_num);
  // TODO: initialize the size of /dev/fb
}

char* get_file_name(int fd) {
  return file_table[fd].name;
}