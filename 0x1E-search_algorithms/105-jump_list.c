#include "search_algos.h"
#include <math.h>
/**
 * move_node - is a function that move the pointer of a node
 * @node: is the pointer of a node to move
 * @limit: is the value of how many times the node is moving
 *
 */
void move_node(listint_t **node, int limit)
{
	while (limit > 0)
	{
		*node = (*node)->next;
		limit--;
		if ((*node)->next == NULL)
			break;
	}
}
/**
 * print_check_msg - is a function that prints a message
 * @pos: is the position in the array
 * @value: is the value in the array
 *
 */
void print_check_msg(size_t pos, int value)
{
	printf("Value checked array[%i] = [%i]\n", (int) pos, value);
}

/**
 * jump_list - is a function that searches for a value in an sorted array of
 * integers using the Jump search algorithm.
 * @list: is a pointer to the head of the list to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: NULL if value is not present in the list or if head is NULL,
 * otherwise the pointer to the first node where value is located
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int limit = (int) size, step_interval = sqrt(limit), m = 0;
	listint_t *n_step = list, *n_prev = list;

	if (list == NULL)
		return (NULL);
	move_node(&n_step, step_interval);
	do {
		print_check_msg(n_step->index, n_step->n);
		m = n_step->index;
		if (n_step->n > value)
			break;
		if (n_step->index == size - 1)
			break;
		n_prev = n_step;
		move_node(&n_step, step_interval);
	} while (n_step != NULL);
	if (n_step == NULL)
		m = limit - 1;
	printf("Value found between indexes [%i] and [%i]\n",
	       (int) n_prev->index, m);
	while (n_prev->n < value)
	{
		print_check_msg(n_prev->index, n_prev->n);
		n_prev = n_prev->next;
		if (n_prev->index == (size_t) m)
			break;
	}
	print_check_msg(n_prev->index, n_prev->n);
	if (n_prev->n == value)
		return (n_prev);
	return (NULL);
}
