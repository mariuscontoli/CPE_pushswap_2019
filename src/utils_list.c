/*
** EPITECH PROJECT, 2019
** utils_list.c
** File description:
** utilitary file for lists
*/

#include "../include/my_push_swap.h"

list_t new_list(void)
{
    return NULL;
}

Bool is_empty_list(list_t l_x)
{
    if (l_x == NULL) {
        return true;
    }
    return false;
}

int my_listlen(list_t l_x)
{
    if (is_empty_list(l_x)) {
        return (0);
    }
    return l_x->length;
}

int my_first_elem(list_t l_x)
{
    if (is_empty_list(l_x)) {
        exit (1);
    }
    return l_x->start->number;
}

int my_last_elem(list_t l_x)
{
    if (is_empty_list(l_x)) {
        exit (1);
    }
    return l_x->end->number;
}