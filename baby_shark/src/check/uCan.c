#include "../../include/header/baby_shark.h"

int uCan(char *line){
	int i = 1;
	while (line[i] != ' '){
		i++;
	}
	char name[i];
	name[i - 1] = '\0';
	i = 1;
	while (line[i] != ' '){
		name[i - 1] = line[i];
		i++;
	}
	if (line[0] == '-'){
		if (strcmp(name, getlogin()) == 0)
			return 0;
	}else if (line[0] == '%'){
		if (gCan(name) == 0)
			return 0;
	}
	return 1;
}