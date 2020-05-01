#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data (n) of a
 * dlistint_t linked list
 * @head: pointer to the head of a dlistint_t list
 *
 * Return: the sum of all the nodes in the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (aux != NULL)
	{
		sum += aux->n;
		aux = aux->next;
	}
	return (sum);
}
