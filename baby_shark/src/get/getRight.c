#include "../../include/header/baby_shark.h"

struct right getRight(void){
  FILE *file;
  char *line = NULL;
  size_t len = 0;
  ssize_t read;
  struct right right;
  file = fopen("/etc/baby_sharkers.d/baby_sharkers", "r+");
  if (file == NULL){
    printf("Invalid file or empty\n");
    exit(EXIT_FAILURE);
  }
  while ((read = getline(&line, &len, file)) != -1){
    if (line[0] == '-' || line[0] == '%'){
      if (!uCan(line))
        right = setRight(line);
    }
  }
  free(line);
  fclose(file);
  return right;
}
