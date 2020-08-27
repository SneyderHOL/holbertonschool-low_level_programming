#include "search_algos.h"
#include <math.h>

/**
 * get_mid_position - is a function that gets the middle position for the
 * interpolar search algorithm
 * @high: is the highest index in the search block
 * @low: is the lowest index in search block
 * @a_high: is the value in the high position in the array
 * @a_low: is the value in the low position in the array
 * @value: is the value to search
 *
 * Return: the middle position
 */
int get_mid_position(int high, int low, int a_high, int a_low, int value)
{
	int mid = 0;

	mid = low + (((double) (high - low) / (a_high - a_low)) *
		     (value - a_low));
	return (mid);
}
/**
 * print_check_msg - is a function that prints a message
 * @pos: is the position in the array
 * @value: is the value in the array
 *
 */
void print_check_msg(int pos, int value)
{
	printf("Value checked array[%i] = [%i]\n", pos, value);
}

/**
 * interpolation_search - is a function that searches for a value in an sorted
 * array of integers using the Jump search algorithm.
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: -1 if value is not present in array or if array is NULL, otherwise
 * the first index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	int limit = (int) size, low = 0, high = limit - 1, mid = 0;

	if (array == NULL)
		return (-1);
	while ((array[high] != array[low]) && (value >= array[low]) &&
	       (value <= array[high]))
	{
		mid = get_mid_position(high, low, array[high], array[low],
				       value);
		if (mid > limit)
			break;
		print_check_msg(mid, array[mid]);
		if (array[mid] < value)
		{

			low = mid + 1;
		}
		else if (value < array[mid])
		{
			high = mid - 1;
		}
		else
			return (mid);
	}
	if (value == array[low])
	{
		print_check_msg(mid, array[mid]);
		return (low);
	}
	mid = get_mid_position(high, low, array[high], array[low], value);
	printf("Value checked array[%i] is out of range\n", mid);
	return (-1);
}
