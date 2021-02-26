#include "../../include/header/baby_shark.h"

int gCan(char *name) {
	int j;
	int ngroups = 1000;
	gid_t *groups;
	struct passwd *pw;

	groups = malloc(ngroups * sizeof (gid_t));
	pw = getpwnam(getlogin());
	getgrouplist(pw->pw_name, pw->pw_gid, groups, &ngroups);
	for (j = 0; j < ngroups; j++){
		if (strcmp(name,getgrgid(groups[j])->gr_name) == 0)
		    return 0;
	}
	return 1;
}