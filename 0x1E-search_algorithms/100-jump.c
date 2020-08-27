#include "search_algos.h"
#include <math.h>
/**
 * jump_search - is a function that searches for a value in an sorted array of
 * integers using the Jump search algorithm.
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: -1 if value is not present in array or if array is NULL, otherwise
 * the first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	int limit = (int) size, prev = 0, step = 0, min = 0;

	if (array == NULL)
		return (-1);
	if (value < array[min])
		return (-1);
	while (array[min] < value)
	{
		if (step < limit)
			printf("Value checked array[%i] = [%i]\n", min,
			       array[min]);
		else
			break;
		prev = step;
		step += sqrt(limit);
		min = step < limit ? step : limit - 1;
	}
	if (step == 0)
		step += sqrt(limit);
	printf("Value found between indexes [%i] and [%i]\n", prev, step);
	min = step < limit ? step : limit;
	while (array[prev] < value)
	{
		printf("Value checked array[%i] = [%i]\n", prev, array[prev]);
		prev++;
		if (prev == min)
			break;
	}
	if (array[prev] == value)
	{
		printf("Value checked array[%i] = [%i]\n", prev, array[prev]);
		return (prev);
	}
	return (-1);
}
