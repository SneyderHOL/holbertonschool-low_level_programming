#include "search_algos.h"

/**
 * linear_search - is a function that searches for a value in an array of
 * integers using the Linear search algorithm.
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: -1 if value is not present in array or if array is NULL, otherwise
 * the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	int limit = 0, idx = 0, pos = -1;

	if (array == NULL)
		return (-1);
	limit = (int) size;
	for (idx = 0; idx < limit; idx++)
	{
		printf("Value checked array[%i] = [%i]\n", idx, array[idx]);
		if (array[idx] == value)
		{
			pos = idx;
			break;
		}
	}
	return (pos);
}
