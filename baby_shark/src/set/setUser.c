#include "../../include/header/baby_shark.h"

int setUser(struct passwd *pw, struct right right)
{
	struct passwd *pw2;
	struct group *grp;
	if (strcmp(right.uRight, "ALL") == 0)
	{
		setuid(pw->pw_uid);
	}
	else if ((pw2 = getpwnam(right.uRight)) == NULL)
	{
		printf("baby_shark: /etc/baby_sharks.d/baby_sharkers unknown user: %s\n", right.uRight);
		exit(EXIT_FAILURE);
	}
	else
		pw->pw_uid = pw2->pw_uid;
	if (strcmp(right.gRight, "ALL") == 0)
	{
		setgid(pw->pw_gid);
	}
	else if ((grp = getgrnam(right.gRight)) == NULL)
	{
		printf("baby_shark: /etc/baby_sharks.d/baby_sharkers unknown group: %s\n", right.gRight);
		exit(EXIT_FAILURE);
	}
	else
		pw->pw_gid = grp->gr_gid;
	setuid(pw->pw_uid);
	setgid(pw->pw_gid);
	return 0;
}
