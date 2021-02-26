#include "../../include/header/baby_shark.h"

int needOpen(void)
{
	FILE *file = NULL;
	int now = minuteur();
	char tmp[11];
	if ((file = fopen("/etc/baby_sharkers.d/timer", "r+")) != NULL)
	{
		fgets(tmp, 11, file);
		int lastConnection = atoi(tmp);
		fclose(file);
		if ((now - lastConnection) <= 300 && (now - lastConnection) >= 0)
		{
			setNewTime(now);
			return 0;
		}
	}
	else
		printf("[baby_shark] /etc/baby_sharkers.d/timer directory or file does not exist\n");
	return 1;
}
