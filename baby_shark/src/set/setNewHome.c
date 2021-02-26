#include "../../include/header/baby_shark.h"

void setNewHome(char *name){
	char *address = "export HOME=/home/";
	char *tmp;
	if (getpwnam(name) == NULL) {
		printf("baby_shark: unknown user: %s\n", name);
		exit(EXIT_FAILURE);
	}
	tmp = malloc(sizeof(char)*(my_strlen(address)+my_strlen(name)+1));
	strcpy(tmp,address);
	strcat(tmp,name);
	system(tmp);
	free(tmp);
}