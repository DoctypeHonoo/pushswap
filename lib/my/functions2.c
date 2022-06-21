/*
** EPITECH PROJECT, 2021
** B-CPE-110-MPL-1-1-pushswap-guillaume.lemoine
** File description:
** functions2
*/

#include <stdlib.h>
#include "../../include/my.h"
#include <unistd.h>

void node_push_back(t_node **node, int value)
{
    t_node *next_node = malloc(sizeof(t_node));
    t_node *prev_node = malloc(sizeof(t_node));

    next_node->value = value;
    next_node->next = NULL;
    if (*node == NULL) {
        *node = next_node;
        return;
    }
    prev_node = *node;
    while (prev_node->next != NULL)
        prev_node = prev_node->next;
    prev_node->next = next_node;
}

t_node *node_pop_back(t_node **node)
{
    t_node *deleted = NULL;
    t_node *temp = *node;
    if (temp) {
    	while (temp->next->next) {
    	    temp = temp->next;
    	}
    	deleted = temp->next;
    	temp->next = NULL;
    }
    return deleted;
}

void node_push_front(t_node **node, int value)
{
    t_node *node_cpy = malloc(sizeof(t_node));
    node_cpy->value = value;
    node_cpy->next = (*node);
    (*node) = node_cpy;
}

t_node *node_pop_front(t_node **node)
{
    t_node *temp = *node;

    if (temp) {
        if ((*node)->next)
            (*node) = (*node)->next;
        else
            (*node) = NULL;
        temp->next = NULL;
        return temp;
    }
    return NULL;
}

void rb(t_node **l_b)
{
    node_push_back(l_b, node_pop_front(l_b)->value);
    write(1, "rb ", 3);
}
