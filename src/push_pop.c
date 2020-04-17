/*
** EPITECH PROJECT, 2019
** push_pop.c
** File description:
** push and pop operations file
*/

#include "../include/my_push_swap.h"

list_t push_back_dlist(list_t l_x, int x)
{
    listNode_t *element;

    element = malloc(sizeof(*element));

    if (element == NULL) {
        exit(EXIT_FAILURE);
    }

    element->number = x;
    element->next = NULL;
    element->previous = NULL;

    if (is_empty_list(l_x)) {
        l_x = malloc(sizeof(*l_x));

        if (l_x == NULL) {
            exit(EXIT_FAILURE);
        }

        l_x->length = 0;
        l_x->start = element;
        l_x->end = element;
    } else {
        l_x->end->next = element;
        element->previous = l_x->end;
        l_x->end = element;
    }

    l_x->length++;

    return l_x;
}

list_t push_front_dlist(list_t l_x, int x)
{
    listNode_t *element;

    element = malloc(sizeof(*element));
    if (element == NULL) {
        exit(EXIT_FAILURE);
    }
    element->number = x;
    element->next = NULL;
    element->previous = NULL;
    if (is_empty_list(l_x)) {
        l_x = malloc(sizeof(*l_x));
        if (l_x == NULL) {
            exit(EXIT_FAILURE);
        }
        l_x->length = 0;
        l_x->start = element;
        l_x->end = element;
    } else {
        l_x->start->previous = element;
        element->next = l_x->start;
        l_x->start = element;
    }
    l_x->length++;
    return l_x;
}

list_t pop_back_dlist(list_t l_x)
{
    if (is_empty_list(l_x)) {
        return new_list();
    }
    if (l_x->start == l_x->end) {
        free(l_x);
        l_x = NULL;

        return new_list();
    }
    listNode_t *temp = l_x->end;
    l_x->end = l_x->end->previous;
    l_x->end->next = NULL;
    temp->next = NULL;
    temp->previous = NULL;
    free(temp);
    temp = NULL;
    l_x->length--;
    return l_x;
}

list_t pop_front_dlist(list_t l_x)
{
    if (is_empty_list(l_x)) {
        return new_list();
    }
    if (l_x->start == l_x->end) {
        free(l_x);
        l_x = NULL;

        return new_list();
    }
    listNode_t *temp = l_x->start;
    l_x->start = l_x->start->next;
    l_x->start->previous = NULL;
    temp->next = NULL;
    temp->previous = NULL;
    free(temp);
    temp = NULL;
    l_x->length--;
    return l_x;
}