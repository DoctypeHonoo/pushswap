/*
** EPITECH PROJECT, 2021
** B-CPE-110-MPL-1-1-pushswap-guillaume.lemoine
** File description:
** functions
*/

#include <stdlib.h>
#include "../../include/my.h"
#include <unistd.h>

void sa(t_node **l_a)
{
    t_node *temp;
    if ((*l_a) && (*l_a)->next) {
        temp = (*l_a);
        temp = temp->next;
        (*l_a)->next = (*l_a)->next->next;
        temp->next = (*l_a);
        (*l_a) = temp;
    }
    write(1, "sa ", 3);
}

void sb(t_node **l_b)
{
    t_node *temp;
    if ((*l_b) && (*l_b)->next) {
        temp = (*l_b);
        temp = temp->next;
        (*l_b)->next = (*l_b)->next->next;
        temp->next = (*l_b);
        (*l_b) = temp;
    }
    write(1, "sb ", 3);
}

void pa(t_node **l_a, t_node **l_b)
{
    node_push_front(l_a, node_pop_front(l_b)->value);
    if (*l_b == NULL) {
        write(1, "pa\n", 3);
    } else {
        write(1, "pa ", 3);
    }
}

void pb(t_node **l_b, t_node **l_a)
{
    node_push_front(l_b, node_pop_front(l_a)->value);
    write(1, "pb ", 3);
}

void ra(t_node **l_a)
{
    node_push_back(l_a, node_pop_front(l_a)->value);
    write(1, "ra ", 3);
}
