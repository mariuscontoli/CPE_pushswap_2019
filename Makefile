##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile for executable
##

CC =	gcc

NAME	=	push_swap

SRC	=	src/algo.c\
		src/my_push_swap.c\
		src/operations.c\
		src/operations2.c\
		src/operations3.c\
		src/push_pop.c\
		src/utils_list.c\
		src/utils.c\

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

%.o: %.c
	$(CC) -o $@ -c $<

$(NAME): $(OBJ)
	$(CC) -o $@ $^ -lm

clean:
	rm -rf *.o
	rm -rf src/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all test clean