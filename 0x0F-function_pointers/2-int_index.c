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
	int i = 0;

	if (array != NULL && cmp != NULL)
		if (size > 0)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(*(array + i)))
					return (i);
			}
		}
	return (-1);
}
