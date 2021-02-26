#include "../../include/header/baby_shark.h"

int my_strcmp(const char *s1, const char *s2)
{
    int c;
    s2++;
    if (*s1 != *s2) {
        c = *s1 - *s2;
        return c;
    }
    while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0') {
        s1++;
        s2++;
    }
    c = *s1 - *s2;
    return c;
}
