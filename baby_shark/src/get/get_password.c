#include "../../include/header/baby_shark.h"

void get_password(char *password)
{
    static struct termios old;
    static struct termios new;
    tcgetattr(STDIN_FILENO, &old);
    new = old;
    new.c_lflag &= ~(ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &new);
    if (fgets(password, BUFSIZ, stdin) == NULL)
        password[0] = '\0';
    else
        password[strlen(password)-1] = '\0';
    tcsetattr(STDIN_FILENO, TCSANOW, &old);
}