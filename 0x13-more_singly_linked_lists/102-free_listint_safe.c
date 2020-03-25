#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - function that frees a listint_t list.
 * @head: pointer to the head of a listint element
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **head)
{
	unsigned int num = 0;
	listint_t *aux = *head;

	if (head == NULL || *head == NULL)
		return (0);
	while (aux != NULL)
	{
		free(aux);
		num++;
		if (aux <= aux->next)
			break;
		aux = aux->next;
	}
	*head = NULL;
	return (num);
}
