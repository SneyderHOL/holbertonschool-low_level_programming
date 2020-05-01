#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a dlistint_t
 * linked list
 * @head: pointer to the head of a dlistint_t list
 * @index: index of the returning node
 *
 * Return: the address of the node if exist, NULL otherwise
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int pos = 0;
	dlistint_t *aux = head;

	if (head == NULL)
		return (NULL);
	while (aux != NULL && pos < index)
	{
		aux = aux->next;
		pos++;
	}
	if (pos != index)
		return (NULL);
	return (aux);
}
