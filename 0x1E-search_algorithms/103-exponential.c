#include "search_algos.h"
#include <math.h>

/**
 * print_array - is a function that prints an array
 * @array: is a pointer to the first element of the array to print
 * @size: is the number of elements in array
 *
 */

void print_array(int *array, int size)
{
	int idx = 0;

	if (array == NULL)
		return;
	printf("Searching in array: ");
	for (idx = 0; idx < size; idx++)
	{
		printf("%i", array[idx]);
		if (idx != (size - 1))
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - is a function that searches for a value in a sorted array of
 * integers using the Binary search algorithm.
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: -1 if value is not present in array or if array is NULL, otherwise
 * the first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	int limit = 0, pos = 0, mid = 0, aux = 0;

	if (array == NULL)
		return (-1);
	limit = (int) size;
	print_array(array, limit);
	if (limit == 1)
	{
		if (array[0] == value)
			return (0);
		else
			return (-1);
	}
	mid = limit / 2;
	if (limit % 2 == 0)
	{
		aux = mid;
		mid = mid - 1;
	}
	else
		aux = mid + 1;
	if (value == array[mid])
		return (mid);
	else if (value > array[mid])
	{
		pos = binary_search((array + mid + 1), (size_t) limit - aux,
				    value);
		if (pos != -1)
			pos += limit / 2;
	}
	else
		pos = binary_search(array, (size_t) mid, value);
	return (pos);
}
/**
 * exponential_search - is a function that searches for a value in an sorted
 * array of integers using the Exponential search algorithm.
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: -1 if value is not present in array or if array is NULL, otherwise
 * the first index where value is located
 */

int exponential_search(int *array, size_t size, int value)
{
	int limit = (int) size, bound = 1, prev = 0, ret_idx = 0;

	if (array == NULL)
		return (-1);
	while (bound < limit && array[bound] < value)
	{
		printf("Value checked array[%i] = [%i]\n", bound,
		       array[bound]);
		prev = bound;
		bound *= 2;
	}
	if (bound >= limit)
		bound = limit - 1;
	printf("Value found between indexes [%i] and [%i]\n", prev, bound);
	ret_idx = binary_search(array + prev, bound - prev + 1, value);
	if (ret_idx == -1)
		return (-1);
	return (prev + ret_idx);
}
