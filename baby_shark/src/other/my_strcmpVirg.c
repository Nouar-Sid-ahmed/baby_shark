#include "../../include/header/baby_shark.h"

int my_strcmpVirg(char *line){
  int c = 0;
  int i = 0;
  while (line[i]){
    if(line[i]==',')
      c++;
    i++;
  }
  return c;
}