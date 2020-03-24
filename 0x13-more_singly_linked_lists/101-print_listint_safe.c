#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - function that prints a listint_t list.
 * @head: pointer to the head of a listint element
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int num = 0;
	const listint_t *turtle = head;

	if (head == NULL)
		exit(98);
	while (turtle != NULL && turtle > turtle->next)
	{
		printf("[%p] %i\n", (void *) turtle, turtle->n);
		turtle = turtle->next;
		num++;
	}
	if (turtle != NULL && turtle < turtle->next)
	{
		printf("[%p] %i\n", (void *) turtle, turtle->n);
		printf("-> [%p] %i\n", (void *) turtle->next, turtle->next->n);
	}
	return (num);
}
