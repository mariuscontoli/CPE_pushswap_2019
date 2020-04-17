/*
** EPITECH PROJECT, 2019
** utils.c
** File description:
** utilitary file
*/

#include "../include/my_push_swap.h"

int my_getnbr(char *str)
{
    int i = 0;
    int sign = 1;
    int	tmp = 0;

    if (str[0] == '-') {
        sign = -1;
        i++;
    }
    for (; str[i] != '\0'; ++i) {
            tmp = tmp * 10 + str[i] - '0';
    }
    return (tmp * sign);
}

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        ++i;
    }
}
