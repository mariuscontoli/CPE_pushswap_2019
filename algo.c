/*
** EPITECH PROJECT, 2019
** algo.c
** File description:
** algorithm file
*/

#include "include/my_push_swap.h"

void find_smallest(pushswap_t pushswap)
{
    pushswap->smallest = pushswap->l_a->start->number;
    while (pushswap->smallest != pushswap->l_a->start->next->number) {
        if (pushswap->smallest > pushswap->l_a->start->next->number) {
            pushswap->smallest = pushswap->l_a->start->next->number;
        }
        ra(pushswap);
        my_putstr("ra");
        my_putstr(" ");
    }
}

void sort(pushswap_t pushswap)
{
    while (pushswap->l_a->start->number > pushswap->smallest) {
        ra(pushswap);
        my_putstr("ra");
        my_putstr(" ");
    }
    if (pushswap->smallest == pushswap->l_a->start->number) {
        pb(pushswap);
        my_putstr("pb");
        my_putstr(" ");
    }
}

void do_sort(pushswap_t pushswap)
{
    while (pushswap->l_a->start != pushswap->l_a->end) {
        find_smallest(pushswap);
        sort(pushswap);
    }
    while (pushswap->l_b->start->next != NULL) {
        pa(pushswap);
        my_putstr("pa");
        my_putstr(" ");
    }
    pa(pushswap);
    my_putstr("pa");
    my_putstr("\n");
}

void free_lista(pushswap_t pushswap)
{
    if (is_empty_list(pushswap->l_a))
        return;
    listNode_t *element;
    element = pushswap->l_a->start;

    while (element != pushswap->l_a->end) {
        element = element->next;
        if (element != NULL) {
            free(element->previous);
        }
    }
    free(pushswap->l_a->end);
}