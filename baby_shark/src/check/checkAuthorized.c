#include "../../include/header/baby_shark.h"

int checkAuthorized(char *cmd, char **list){
    int i = 0;
    int c = 1;
    if (strcmp(list[0],"ALL")==0)
        c = 0;
    while(list[i]){
        if ((list[i][0] == '!') && (my_strcmp(cmd, list[i]) == 0)){
            printf("baby_shark: no right to run: %s\n",cmd);
            exit(EXIT_FAILURE);
        }
        if (strcmp(list[i],cmd) == 0){
            return 0;
        }
        i++;
    }
    return c;
}