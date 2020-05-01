#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node at index of a
 * dlistint_t linked list
 * @head: pointer to the head of a dlistint_t list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int pos = 0;
	dlistint_t *tmp_node = *head, *aux = NULL;

	if (head == NULL || *head == NULL)
		return (-1);
	while (tmp_node != NULL && pos < index)
	{
		aux = tmp_node;
		tmp_node = tmp_node->next;
		pos++;
	}
	if (pos != index)
		return (-1);
	if (*head == tmp_node)
	{
		aux = tmp_node->next;
		if (aux != NULL)
			aux->prev = NULL;
		*head = aux;
	}
	else
	{
		tmp_node = aux->next;
		aux->next = tmp_node->next;
		if (aux->next != NULL)
			aux->next->prev = aux;
	}
	tmp_node->next = NULL;
	tmp_node->prev = NULL;
	free(tmp_node);
	return (1);
}
