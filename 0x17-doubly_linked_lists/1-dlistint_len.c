#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements in a linked
 * dlistint_t list
 * @h: pointer to the head of a dlistint_t list
 *
 * Return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *aux = NULL;

	if (h == NULL)
		return (len);
	aux = h;
	while (aux != NULL)
	{
		len++;
		aux = aux->next;
	}
	return (len);
}
