#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node at a given
 * position
 * @h: pointer to the head of a dlistint_t list
 * @idx: index of the list where the new node should be added
 * @n: value of the node to be added
 *
 * Return: the address of the node, NULL otherwise
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp_node = *h, *aux = NULL;
	unsigned int pos = 0;

	if (h == NULL)
		return (NULL);
	while (tmp_node != NULL && pos < idx)
	{
		aux = tmp_node;
		tmp_node = tmp_node->next;
		pos++;
	}
	if (pos != idx)
		return (NULL);
	tmp_node = malloc(sizeof(dlistint_t));
	if (tmp_node == NULL)
		return (NULL);
	tmp_node->n = n;
	tmp_node->next = NULL;
	tmp_node->prev = NULL;
	if (idx == 0)
	{
		tmp_node->next = *h;
		if (*h != NULL)
			(*h)->prev = tmp_node;
		*h = tmp_node;
	}
	else
	{
		tmp_node->next = aux->next;
		if (tmp_node->next != NULL)
			tmp_node->next->prev = tmp_node;
		aux->next = tmp_node;
		tmp_node->prev = aux;
	}
	return (tmp_node);
}
