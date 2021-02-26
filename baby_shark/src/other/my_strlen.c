#include "../../include/header/baby_shark.h"

int my_strlen(const char *str)
{
    int c = 0;
    while (str[c] != '\0')
    {
        c++;
    }
    return c;
}