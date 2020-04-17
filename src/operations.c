/*
** EPITECH PROJECT, 2019
** operations.c
** File description:
** operations file
*/

#include "../include/my_push_swap.h"

void sa(pushswap_t pushswap)
{
    int temp;

    temp = pushswap->l_a->start->number;
    pushswap->l_a->start->number = pushswap->l_a->start->next->number;
    pushswap->l_a->start->next->number = temp;
}

void sb(pushswap_t pushswap)
{
    int temp;

    temp = pushswap->l_b->start->number;
    pushswap->l_b->start->number = pushswap->l_b->start->next->number;
    pushswap->l_b->start->next->number = temp;
}

void sc(pushswap_t pushswap)
{
    sa(pushswap);
    sb(pushswap);
}

void pa(pushswap_t pushswap)
{
    pushswap->l_a = push_front_dlist(pushswap->l_a,
    pushswap->l_b->start->number);
    pushswap->l_b = pop_front_dlist(pushswap->l_b);
}

void pb(pushswap_t pushswap)
{
    pushswap->l_b = push_front_dlist(pushswap->l_b,
    pushswap->l_a->start->number);
    pushswap->l_a = pop_front_dlist(pushswap->l_a);
}