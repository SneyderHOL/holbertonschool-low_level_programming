#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: pointer to the head of a listint element
 * Return: the address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	unsigned int num = 0;
	listint_t *aux = head;
	listint_t *tmp = head;

	if (head == NULL)
		return (NULL);
	while (aux != NULL)
	{
		if (aux <= aux->next)
		{
			num++;
			tmp = aux->next;
			break;
		}
		aux = aux->next;
	}
	if (num == 0)
		return (NULL);
	return (tmp);
}
