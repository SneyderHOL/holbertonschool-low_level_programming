#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node of at index of a
 * listint_t linked list.
 * @head: pointer to the head of a listint element
 * @index: index of the list where the node should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp_node = *head;
	listint_t *aux = *head;
	unsigned int num = 0;

	if (*head == NULL)
		return (-1);
	while (tmp_node != NULL && num < index)
	{
		aux = tmp_node;
		tmp_node = tmp_node->next;
		num++;
	}
	if (num != index)
		return (-1);

	if (aux == tmp_node)
	{
		aux = aux->next;
		*head = aux;
	}
	else
	{
		tmp_node = aux->next;
		aux->next = tmp_node->next;
	}
	free(tmp_node);
	return (1);
}
