
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <time.h>

int main() {
  struct stat *s = malloc(sizeof(struct stat));
  stat("text.txt", s);
  printf("File Size: %lld\n", s->st_size);
  printf("Permissions: %o\n", s->st_mode);
  printf("Time of last access: %s", ctime(&(s->st_atime)));
  free(s);
  return 0;
}
