#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - Adds node at beginning
 * @head - pointer to address of head passed
 * @n - value for new node
 *
 * Return: NULL if function fails else adrress of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;

	*head = ptr;

	return (ptr);
}
