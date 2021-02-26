#include "../../include/header/baby_shark.h"

struct right setRight(char *line)
{
	struct right right;

	right.commands = malloc(sizeof(char *) * (my_strcmpVirg(line) + 2));
	strtok(line, " ");
	char *login = strtok(NULL, "=");
	char *uRight = strtok(NULL, ":");
	char *gRight = strtok(NULL, ")");
	char *cmd;
	int n = 0;
	int b = 1;

	uRight++;
	right.login = malloc(sizeof(char) * (1 + my_strlen(login)));
	right.uRight = malloc(sizeof(char) * (1 + my_strlen(uRight)));
	right.gRight = malloc(sizeof(char) * (1 + my_strlen(gRight)));

	strcpy(right.login, login);
	strcpy(right.uRight, uRight);
	strcpy(right.gRight, gRight);

	while ((cmd = strtok(NULL, ",")) != NULL)
	{
		if(b){ cmd++; b = 0; }
		right.commands[n] = malloc(sizeof(char) * (1 + my_strlen(cmd)));
		strcpy(right.commands[n], cmd);
		n++;
	}
	right.commands[n] = NULL;
	return right;
}
