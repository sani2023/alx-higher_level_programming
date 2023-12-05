#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - print all elements of list
 * @h: pointer to head
 * Return: number of ndes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	unsigned int n;


	current = h;
	n = 0;
	while (current != NULL)
	{
		print("%i\n", current->n);
		current = current->next;
		n++;
	}

	return (n)
}

/**
 * add_nodeint_end - add new node
 * @head: ptr to ptr of 1t nde
 * @n: integer to be include in nw
 * Return: addres of the nw element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current;

	current = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL)

			new->n = n;
			new->next = NULL;

			if (*head == NULL)
				*head = new;
			else
			{
				while (current->next != NULL)
					current = current->next;
				current->next = new;
			}

			return (new);
}

/**
 * free_listint - free a listint
 * @head: ptr to list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
