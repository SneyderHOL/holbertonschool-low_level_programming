#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - function that insert a new node of at a given
 * position.
 * @head: pointer to the head of a listint element
 * @idx: index of the list where the new node should be added.
 * @n: the data that will be stored in the new node
 * Return: the head node's data (n)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp_node = NULL;
	listint_t *aux = *head;
	unsigned int num = 0;

	if (head == NULL)
		return (NULL);
	while (aux != NULL && num < idx - 1)
	{
		aux = aux->next;
		num++;
	}
	if (num != idx - 1)
		return (NULL);
	tmp_node = malloc(sizeof(listint_t));
	if (tmp_node == NULL)
		return (NULL);
	tmp_node->n = n;
	tmp_node->next = aux->next;
	aux->next = tmp_node;
	return (tmp_node);
}
