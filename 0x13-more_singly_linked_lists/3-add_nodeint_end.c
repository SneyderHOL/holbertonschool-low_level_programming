#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a
 * listint_t list.
 * @head: pointer to the head of a listint element
 * @n: value that will containt the node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *aux = *head;
	listint_t *tmp_node = NULL;

	if (head == NULL)
		return (NULL);
	tmp_node = malloc(sizeof(listint_t));
	if (tmp_node == NULL)
		return (NULL);
	tmp_node->n = n;
	tmp_node->next = NULL;
	if (aux != NULL)
	{
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = tmp_node;
	}
	else
	{
		*head = tmp_node;
	}
	return (*head);
}
