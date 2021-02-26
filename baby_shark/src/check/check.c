#include "../../include/header/baby_shark.h"

void check(int s)
{
    if (checkRight()) {
        printf("%s is not in the baby_sharkers file.  This incident will be reported.\n", getlogin());
        exit(EXIT_FAILURE);
    }
    if (needOpen()) {
        if (!checkPassword(s))
            setNewTime(minuteur());
        else
            exit(EXIT_FAILURE);
    }
}