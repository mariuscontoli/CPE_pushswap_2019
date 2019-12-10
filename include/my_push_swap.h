/*
** EPITECH PROJECT, 2019
** push_swap.h
** File description:
** header for push swap project
*/

#ifndef MY_PUSH_SWAP_H_
#define MY_PUSH_SWAP_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef enum {
    false,
    true
}Bool;

/* Node ou cellule */
typedef struct listNode
{
    int number;
    struct listNode *next;
    struct listNode *previous;
}listNode_t;

/* Liste */
typedef struct list_t {
    int length;
    listNode_t *start;
    listNode_t *end;
}*list_t;

typedef struct pushswap
{
    int smallest;
    list_t l_a;
    list_t l_b;
}*pushswap_t;

/* protooos */
Bool is_empty_list(list_t l_x);
int my_listlen(list_t l_x);
int my_first_elem(list_t l_x);
int my_last_elem(list_t l_x);
list_t new_list(void);
list_t push_back_dlist(list_t l_x, int x);
list_t push_front_dlist(list_t l_x, int x);
list_t pop_back_dlist(list_t l_x);
list_t pop_front_dlist(list_t l_x);
list_t clear_list(list_t l_x);
void sa(pushswap_t pushswap);
void sb(pushswap_t pushswap);
void sc(pushswap_t pushswap);
void pa(pushswap_t pushswap);
void pb(pushswap_t pushswap);
void ra(pushswap_t pushswap);
void rb(pushswap_t pushswap);
void rr(pushswap_t pushswap);
void rra(pushswap_t pushswap);
void rrb(pushswap_t pushswap);
void rrr(pushswap_t pushswap);
void find_smallest(pushswap_t pushswap);
void sort(pushswap_t pushswap);
void do_sort(pushswap_t pushswap);
void free_lista(pushswap_t pushswap);
void init_list(int ac, char **av, pushswap_t pushswap);
int check_first_sort(int ac, char **av);
int main(int ac, char **av);
int my_getnbr(char *str);
void my_putchar(char c);
int my_putstr(char const *str);

#endif /* !MY_PUSH_SWAP_H_ */
