#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end of a dlistint_t
 * list
 * @head: pointer to the head of a dlistint_t list
 * @n: number to insert in the list
 *
 * Return: the address of the new elements, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *aux = *head, *node = NULL;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	aux->next = node;
	node->prev = aux;
	return (node);
}
