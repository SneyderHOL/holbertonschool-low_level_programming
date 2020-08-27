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
	int limit = (int) size, mid = 0, left = 0, right = 0;

	if (array == NULL)
		return (-1);
	right = limit - 1;
	while (left <= right)
	{
		print_array(array + left, right + 1 - left);
		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
