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
  char size[256];
  int byte = s->st_size;
  int kb = byte / 1000;
  int mb = kb / 1000;
  int gb = mb / 1000;
  sprintf(size, "%d bytes\n%d KB\n%d MB\n%d GB", byte, kb, mb, gb);
  printf("%s\n", size);
  printf("Permissions: %o\n", s->st_mode);
  printf("Time of last access: %s", ctime(&(s->st_atime)));
  free(s);
  return 0;
}
