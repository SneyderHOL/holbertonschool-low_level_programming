#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer to the head of a listint list
 * Return: no return
 */
void free_listint2(listint_t **head)
{
	if (*head != NULL)
		free_listint2(&((*head)->next));
	free(*head);
	 *head = NULL;
}
