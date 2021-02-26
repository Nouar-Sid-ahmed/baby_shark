#include "../../include/header/baby_shark.h"

struct group *setNewGroup(char *optarg, char *gRight){
	struct group *grp;
	if ((grp = getgrnam(optarg)) == NULL) {
		printf("baby_shark: unknown group: %s\n", optarg);
		exit(EXIT_FAILURE);
	}
	if (checkAssign(optarg, gRight)){
		printf("baby_shark: no assignment right to the group: %s\n", optarg);
		exit(EXIT_FAILURE);
	}
	return grp;
}