##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## tqt c le makefile
##

SRC	=	src/main.c \
		src/signal.c \
		src/utility.c \
		src/execute.c \
		src/env.c \
		src/search_bin.c \
		src/check.c \
		src/search.c \
		src/special.c \
		src/stuff.c \
		src/cdstuffs.c \
		src/build_in2.c \
		src/build_in.c \
		src/list.c \

CC	=	gcc

CFLAGS	=	-Wall -Wextra -g -I./include -L./lib/my -lmy

LDFLAGS	= -L./lib/my -lmy

OBJ	=	$(SRC:.c=.o)

NAME = mysh

all:	$(NAME)

$(NAME): $(OBJ)
	make -C lib/my
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)
	make clean

clean:
	rm -f $(OBJ)
	find . -name "*.gcda" -delete
	find . -name '*[#~#]' -delete
	find . -name "*.gcno" -delete
	find . -name "*.o" -delete

fclean: clean
		rm -f $(NAME)

re:	fclean all
