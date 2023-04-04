#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all element of a list
 * @h: pointer to the head of the list
 *
 * Return: number of node present
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
