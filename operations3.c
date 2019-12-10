/*
** EPITECH PROJECT, 2019
** operations3.c
** File description:
** operations file
*/

#include "include/my_push_swap.h"

void rra(pushswap_t pushswap)
{
    int temp = pushswap->l_a->end->number;
    pushswap->l_a = pop_back_dlist(pushswap->l_a);
    pushswap->l_a = push_front_dlist(pushswap->l_a, temp);
}

void rrb(pushswap_t pushswap)
{
    int temp = pushswap->l_b->end->number;
    pushswap->l_b = pop_back_dlist(pushswap->l_b);
    pushswap->l_b = push_front_dlist(pushswap->l_b, temp);
}

void rrr(pushswap_t pushswap)
{
    rra(pushswap);
    rrb(pushswap);
}