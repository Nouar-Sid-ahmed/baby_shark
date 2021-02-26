#include "../../include/header/baby_shark.h"

struct passwd *setNewUser(char *optarg, char *uRight){
	struct passwd *pw;
	if ((pw = getpwnam(optarg)) == NULL) {
		printf("baby_shark: unknown user: %s\n", optarg);
		exit(EXIT_FAILURE);
	}
	if (checkAssign(optarg, uRight)){
		printf("baby_shark: no assignment right to the user: %s\n", optarg);
		exit(EXIT_FAILURE);
	}
	return pw;
}