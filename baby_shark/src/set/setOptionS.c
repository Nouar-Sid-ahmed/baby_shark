#include "../../include/header/baby_shark.h"

int setOptionS(int argc, char **argv){
  int  k;
  for (k=0; k < argc ; k++){
    if (argv[k][0] == '-' && argv[k][1] == 'S'){
      return 1;
    }
  }
  return 0;
}