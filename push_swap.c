/*
** EPITECH PROJECT, 2021
** B-CPE-110-MPL-1-1-pushswap-guillaume.lemoine
** File description:
** pushswap
*/

#include <stdlib.h>
#include "include/my.h"
#include <unistd.h>

int locate_min(t_node *l_a)
{
    int i = 1;
    int location_min = 0;
    int min = l_a->value;

    while (l_a && l_a->next) {
        if (l_a->next->value < min) {
            min = l_a->next->value;
            location_min = i;
        }
        i++;
        l_a = l_a->next;
    }
    return location_min;
}

void push_swap(t_node *l_a, t_node *l_b)
{
    int min;

    while (l_a) {
        min = locate_min(l_a);
        for (int i = 0; i < min; i++) {
            ra(&l_a);
        }
        pb(&l_b, &l_a);
    }
    while (l_b) {
        pa(&l_a, &l_b);
    }
}

void check_if_sorted(t_node *l_a, t_node *l_b)
{
    while (l_a && l_a->next) {
        if (l_a->value > l_a->next->value) {
            push_swap(l_a, l_b);
            return;
        } else
            l_a = l_a->next;
    }
    write(1, "\n", 1);
}

int main(int ac, char **av)
{
    t_node *l_a = NULL;
    t_node *l_b = NULL;

    for (int i = 1; i < ac; i++) {
        node_push_back(&l_a, my_atoi(av[i]));
    }
    check_if_sorted(l_a, l_b);
}
