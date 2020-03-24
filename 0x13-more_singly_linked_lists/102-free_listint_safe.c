#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - function that free a listint_t list.
 * @head: pointer to the head of a listint element
 * Return: a pointer to the first node of the reversed list
 */
size_t free_listint_safe(listint_t **h)
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
