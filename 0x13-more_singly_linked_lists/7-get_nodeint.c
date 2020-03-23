#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a
 * listint_t linked list.
 * @head: pointer to the head of a listint element
 * @index: index of the node
 * Return: the head node's data (n)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux = head;
	unsigned int num = 0;

	if (head == NULL)
		return (NULL);
	while (aux != NULL && num < index)
	{
		aux = aux->next;
		num++;
	}
	if (num != index)
		return (NULL);
	return (aux);
}
