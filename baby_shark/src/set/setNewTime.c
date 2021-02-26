#include "../../include/header/baby_shark.h"

void setNewTime(int now)
{
	FILE *file = NULL;
	file = fopen("/etc/baby_sharkers.d/timer", "w+");
	if (file != NULL)
	{
		fprintf(file, "%d", now);
		fclose(file);
	}
	else
	{
		printf("[baby_shark] /etc/baby_sharkers.d/timer directory or file does not exist\n");
	}
}
