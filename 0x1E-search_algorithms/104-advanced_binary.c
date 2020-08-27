#include "search_algos.h"

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
 * advanced_binary - is a function that searches for a value in a sorted array
 * of integers using the Binary search algorithm.
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: -1 if value is not present in array or if array is NULL, otherwise
 * the first index where value is located
 */

int advanced_binary(int *array, size_t size, int value)
{
	int limit = 0, pos = 0, mid = 0;

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
	if (value > array[mid])
	{
		pos = advanced_binary((array + mid), (size_t) limit - mid,
				    value);
		if (pos != -1)
			pos += mid;
	}
	else if (value < array[mid])
	{
		pos = advanced_binary(array, (size_t) mid, value);
	}
	else
	{
		pos = mid;
		if (mid != 0)
			if (value == array[mid - 1])
				pos = advanced_binary(array, (size_t) mid, value);
	}
	return (pos);
}
