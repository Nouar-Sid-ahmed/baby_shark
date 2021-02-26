#include "../../include/header/baby_shark.h"

int checkRight(void)
{
	FILE *file;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	int check = 1;
	file = fopen("/etc/baby_sharkers.d/baby_sharkers", "r+");
	if (file == NULL)
	{	
		printf("Invalid file or empty\n");
		return 1;
	}
	while ((read = getline(&line, &len, file)) != -1)
	{
		if (line[0] == '-' || line[0] == '%'){
			if (!uCan(line))
				check = uCan(line);
		}
	}
	free(line);
	fclose(file);
	return check;
}
