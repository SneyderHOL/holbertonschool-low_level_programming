#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - function that reverse a listint_t linked list.
 * @head: pointer to the head of a listint element
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *aux = *head;
	listint_t *tmp = *head;

	if (*head == NULL)
		return (NULL);
	while (aux->next != NULL)
	{
		if (tmp != *head)
			tmp = *head;
		*head = aux->next;
		aux->next = (*head)->next;
		(*head)->next = tmp;
	}
	return (*head);
}
