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
	void *p = NULL;
	unsigned int a = 0;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(sizeof(char) * new_size));
	if (new_size == old_size)
		return (ptr);
	if (new_size < old_size)
	{
		return (ptr);
	}
	p = malloc(sizeof(char) * new_size);
	if (p == NULL)
		return (NULL);
	free(ptr);
	return (p);
}
