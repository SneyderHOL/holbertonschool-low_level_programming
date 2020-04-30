#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of a
 * dlistint_t list
 * @head: pointer to the head of a dlistint_t list
 * @n: number to insert in the list
 *
 * Return: the address of the new elements, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *aux = NULL;

	if (head == NULL)
		return (NULL);
	aux = malloc(sizeof(dlistint_t));
	if (aux == NULL)
		return (NULL);
	aux->n = n;
	aux->next = *head;
	aux->prev = NULL;
	*head = aux;
	return(aux);
}
