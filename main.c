#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

int main() {
  struct stat s;
  stat("text.txt", &s);
  printf("File Size: %lld\n", s.st_size);
  printf("Permissions: %d\n", s.st_mode);
  printf("Time of last access: %ld\n", s.st_atime);
  return 0;
}
