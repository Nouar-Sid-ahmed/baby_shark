#ifndef __SHARK_H__
#define __SHARK_H__

#define  _POSIX_C_SOURCE 200809L
#define  _DEFAULT_SOURCE

#include <stdlib.h>
#include <unistd.h>
#include <dirent.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/param.h>
#include <pwd.h>
#include <shadow.h>
#include <crypt.h>
#include <time.h>
#include <math.h>
#include <getopt.h>
#include <termios.h>
#include <grp.h>

struct right{
    char *login;
    char *uRight;
    char *gRight;
    char **commands;
};

// main :
int 			main (int argc, char **argv);

// check :
int 			checkAuthorized(char *cmd, char **list);
int 			checkPassword(int s);
int 			checkRight(void);
int 			checkAssign(char *optarg,char *name);
void 			check(int s);
int 			uCan(char *line);
int 			gCan(char *name);
int			 	needOpen(void);

// get :
struct right 	getRight(void);
void 			get_password(char *password);
int 			my_getopt(int argc, char **argv, struct right right);


// set :
struct right 	setRight(char *line);
void 			setNewTime(int now);
int 			setUser(struct passwd *pw, struct right right);
struct right 	setRight(char *line);
void 			setNewHome(char *name);
struct passwd* 	setNewUser(char *optarg, char *uRight);
struct group*	setNewGroup(char *optarg, char *gRight);
int             setOptionS(int argc, char **argv);

// Other :
int 			my_strcmp(const char *s1, const char *s2);
int 			minuteur(void);
int 			afteropt(int argc, char **argv, int optind, char **listOpte, int b);
int 			my_strlen(const char *str);
int 			my_strcmpVirg(char *line);

#endif
