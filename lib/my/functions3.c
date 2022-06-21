/*
** EPITECH PROJECT, 2021
** B-CPE-110-MPL-1-1-pushswap-guillaume.lemoine
** File description:
** functions3
*/

#include <stdlib.h>
#include "../../include/my.h"
#include <unistd.h>

void rra(t_node **l_a)
{
    node_push_front(l_a, node_pop_back(l_a)->value);
    write(1, "rra ", 4);
}

void rrb(t_node **l_b)
{
    node_push_front(l_b, node_pop_back(l_b)->value);
}
