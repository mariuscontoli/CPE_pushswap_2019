##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile for executable
##

CC =	gcc

NAME	=	push_swap

SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

%.o: %.c
	$(CC) -o $@ -c $<

$(NAME): $(OBJ)
	$(CC) -o $@ $^ -lm

clean:
	rm -rf *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all test clean