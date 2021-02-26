#include "../../include/header/baby_shark.h"

int afteropt(int argc, char **argv, int optind, char **listOpte, int b)
{
    char *c = "";
    if (argv[optind] == NULL){
        printf("baby_shark: no execution\n");
        exit(EXIT_SUCCESS);
    }
    if (!(c = malloc(sizeof(argv[optind]))))
    {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    }
    int count = 0;
    while (optind < argc)
    {
        checkAuthorized(argv[optind],listOpte);
        if (count == 0)
        {
            strcpy(c, argv[optind]);
            strcat(c, " ");
            count = 1;
        }
        else
        {
            strcat(c, argv[optind]);
            strcat(c, " ");
        }
        optind++;
    }
    if(b)
        strcat(c,"&");
    system(c);
    exit(EXIT_SUCCESS);
}