#ifndef __FS_H__
#define __FS_H__

#include <common.h>

#ifndef SEEK_SET
enum {SEEK_SET, SEEK_CUR, SEEK_END};
#endif

size_t fs_open(const char *pathname, int flags, int mode);
size_t fs_write(int fd,const void * buf,size_t len);
size_t fs_read(int fd,const void * buf,size_t len);
size_t fs_lseek(int fd,size_t offset,int whence);
size_t fs_close(int fd);
char* get_file_name(int fd);

#endif
