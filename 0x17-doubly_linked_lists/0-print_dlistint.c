#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: pointer to the head of a dlistint_t list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t elements = 0;
	const dlistint_t *aux = NULL;

	if (h == NULL)
		return (elements);
	aux = h;
	while (aux != NULL)
	{
		printf("%d\n", aux->n);
		elements++;
		aux = aux->next;
	}
	return (elements);
}
