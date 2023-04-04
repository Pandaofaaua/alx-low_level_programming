#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Prints number of element of a list
 * @h: pointer to the head of the list
 *
 * Return: number of node present
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}

	return (i);
}
