#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

typdef struct listint_g
{
	int m;
	struct listint_g *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int m);

void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif
