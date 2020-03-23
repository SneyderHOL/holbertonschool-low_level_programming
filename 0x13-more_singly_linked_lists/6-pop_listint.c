#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list.
 * @head: pointer to the head of a listint element
 * Return: the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *aux = *head;
	int tmp_n = 0;

	if (head == NULL)
		return (0);
	tmp_n = aux->n;
	*head = aux->next;
	free(aux);
	return (tmp_n);
}
