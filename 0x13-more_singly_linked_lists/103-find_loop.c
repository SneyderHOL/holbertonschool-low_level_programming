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
	listint_t *hare = head;
	listint_t *turtle = head;

	if (head == NULL)
		return (NULL);
	while (turtle != NULL || hare != NULL)
	{
		if (turtle == hare)
		{
			turtle = head;
			if (turtle != hare)
			{
				turtle = turtle->next;
				hare = hare->next;
			}
			break;
		}
		turtle = turle->next;
		hare = hare->next->next;
	}

	return (hare);
}
