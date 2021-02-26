#include "../../include/header/baby_shark.h"

int checkPassword(int s)
{
    char *user = getlogin(); //We find the user name of the logged user
    char password[64];
    struct spwd *shadowEntry = getspnam(user); //We find real password for the user logged

    for (int k = 0; k < 3; k++)
    { //You have 3 chances
        printf("[baby_shark] password for %s: ", user);
        if (s)
            scanf("%s",password);
        else
            get_password(password);
        printf("\n");                                                       //We ask for user password
        if (strcmp(shadowEntry->sp_pwdp, crypt(password, shadowEntry->sp_pwdp)) == 0) //We look similarity between the input and the shadow password
            return 0;
        else if (k < 2)
            printf("Sorry, try again.\n");
    }
    printf("baby_shark: 3 incorrect password attempts\n");
    return 1;
}