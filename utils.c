/*
** EPITECH PROJECT, 2019
** utils.c
** File description:
** utilitary file
*/

#include "include/my_push_swap.h"

int my_getnbr(char *str)
{
    int	i = 0;
    int	tmp = 0;

    (str[0] == '-' && str[1]) ? i++ : 0;
    for (; str[i]; i++) {
        if ((str[i] < 48 || str[i] > 57))
            exit (84);
        tmp += str[i] - 48;
        tmp *= 10;
    }
    tmp /= 10;
    if (str[0] == '-')
        return (tmp * (-1));
    else return tmp;
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
