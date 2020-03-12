#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: pointer to an int
 * @size: integer
 * @cmp: pointer to a function
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (cmp == NULL)
		return (-1);
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			j = cmp(array[i]);
			if (j == 0)
				return (i);
		}
	}
	return (-1);
}
