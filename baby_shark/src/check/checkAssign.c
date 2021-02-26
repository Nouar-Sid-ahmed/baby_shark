#include "../../include/header/baby_shark.h"

int checkAssign(char *optarg,char *name){
	if(strcmp(name,"ALL") == 0)
		return 0;
	else if (strcmp(name,optarg) == 0)
		return 0;
	else
		return 1;
}
