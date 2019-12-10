/*
** EPITECH PROJECT, 2019
** operations2.c
** File description:
** operations file
*/

#include "include/my_push_swap.h"

void ra(pushswap_t pushswap)
{
    int temp = pushswap->l_a->start->number;
    pushswap->l_a = pop_front_dlist(pushswap->l_a);
    pushswap->l_a = push_back_dlist(pushswap->l_a, temp);
}

void rb(pushswap_t pushswap)
{
    int temp = pushswap->l_b->start->number;
    pushswap->l_b = pop_front_dlist(pushswap->l_b);
    pushswap->l_b = push_back_dlist(pushswap->l_b, temp);
}

void rr(pushswap_t pushswap)
{
    ra(pushswap);
    rb(pushswap);
}