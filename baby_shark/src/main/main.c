#include "../../include/header/baby_shark.h"

int main(int argc, char **argv)
{
	int s = setOptionS(argc,argv);
	struct right right = getRight();
    check(s);
	my_getopt(argc, argv, right);
	return 0;
}