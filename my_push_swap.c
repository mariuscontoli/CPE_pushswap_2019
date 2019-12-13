/*
** EPITECH PROJECT, 2019
** my_push_swap.c
** File description:
** main file push swap
*/

#include "include/my_push_swap.h"

list_t clear_list(list_t l_x)
{
    while (!is_empty_list(l_x))
        l_x = pop_back_dlist(l_x);
    return l_x;
}

void init_list(int ac, char **av, pushswap_t pushswap)
{
    int i = 1;
    while (i < ac) {
        pushswap->l_a = push_back_dlist(pushswap->l_a, my_getnbr(av[i]));
        i++;
    }
}

int check_first_sort(int ac, char **av)
{
    int i = 1;
    while (i < ac - 1) {
        if (my_getnbr(av[i]) <= my_getnbr(av[i + 1])) {
            i++;
        } else {
            return (0);
        }
    }
    return (1);
}

int main(int ac, char **av)
{
    pushswap_t pushswap;
    int sorted;

    if (ac < 2) {
        return (84);
    }
    sorted = check_first_sort(ac, av);
    if (sorted == 1) {
        my_putstr("\n");
    } else {
        pushswap = malloc(sizeof(*pushswap));
        pushswap->l_a = NULL;
        pushswap->l_b = NULL;
        init_list(ac, av, pushswap);
        do_sort(pushswap);
        free_lista(pushswap);
        free(pushswap->l_a);
        free(pushswap);
    }
    return (0);
}
