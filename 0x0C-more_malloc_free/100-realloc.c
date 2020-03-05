#include "holberton.h"
/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: void pointer
 *@old_size: unsigned int
 *@new_size: unsinged int
 *Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && !ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	ptr = malloc(new_size);
	return (ptr);
}
