#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as a paremeter on
 * each element of an array.
 * @array: pointer to an int
 * @size: size_t
 * @action: pointer to a function
 *
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
