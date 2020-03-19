#include "lists.h"
/**
 * list_len - function that returns the number of elements in a
 * linked list_t list.
 * @h: list_t pointer argument
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int size = 0;
	const list_t *iter = NULL;

	if (h == NULL)
		return (0);
	iter = h;
	while (iter != NULL)
	{
		size++;
		iter = iter->next;
	}
	return (size);
}
