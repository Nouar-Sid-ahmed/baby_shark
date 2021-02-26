NAME	=	baby_shark

CFLAGS	=	-std=c11 -Wall -Werror -Wextra -l crypt

SRC		=	$(wildcard src/*/*.c)

CC		=	gcc

GRPDEL	=	groupdel

GRPAD	=	groupadd

MAN		=	$(wildcard include/man/baby_shark.1.gz)

FOLDER	=	$(wildcard include/baby_sharkers.d)

RM		=	rm -rf

all:		install cp man grpad

$(NAME):	$(SRC)
			$(CC) $(CFLAGS) $(SRC) -o $(NAME)

cp:			| $(FOLDER)
			chmod 440 include/baby_sharkers.d/baby_sharkers
			cp -r $(FOLDER) /etc/.

man:		| $(MAN)
			cp -r $(MAN) /usr/share/man/man1/.

install:	| $(NAME)
			install -m 4755 -o root $(NAME) /usr/local/bin/.

grpad:		
			$(GRPAD) $(NAME)

clean:		
			$(RM) $(NAME)

fclean:		
			$(RM) /usr/local/bin/$(NAME) $(NAME) /etc/baby_sharkers.d /usr/share/man/man1/baby_shark.1.gz
			$(GRPDEL) $(NAME)

re:			fclean install cp man grpad