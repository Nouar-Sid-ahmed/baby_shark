#include "../../include/header/baby_shark.h"

int my_getopt(int argc, char **argv, struct right right)
{
	int opt;
	struct passwd *pw;
	struct group *grp;
	int b = 0;
	pw = getpwnam("root");

	while ((opt = getopt(argc, argv, "u:g:VSbH:")) != -1)
	{
		switch (opt)
		{
		case 'u':
			pw = setNewUser(optarg,right.uRight);
			break;
		case 'g':
			grp = setNewGroup(optarg,right.gRight);
			pw->pw_gid = grp->gr_gid;
			break;
		case 'b':
			b = 1;
			break;
		case 'V':
			printf("Baby_shark version 1.0\nBaby_sharkers syntax version 1.0\n");
			exit(EXIT_SUCCESS);
			break;
		case 'H':
			setNewHome(optarg);
			exit(EXIT_SUCCESS);
			break;
		case '?':
			exit(EXIT_FAILURE);
			break;
		}
	}
	setUser(pw,right);
	afteropt(argc, argv, optind,right.commands,b);
	exit(EXIT_SUCCESS);
}
