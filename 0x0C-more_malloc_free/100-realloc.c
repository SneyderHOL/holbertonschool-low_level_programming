#include "holberton.h"
/**
 *copyp - copy the content of a pointer to another
 *@s1: char pointer argument
 *@s2: char pointer argument
 *@n: unsigned int argument
 *
 */
void copyp(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		*(s1 + i) = *(s2 + i);
}

/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: void pointer
 *@old_size: unsigned int
 *@new_size: unsinged int
 *Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p = NULL;
	unsigned int a = 0;

	if (new_size == 0 && !ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	if (new_size < old_size)
	{
		a = new_size;
		p = ptr;
		*(p + a) = '\0';
		for (a++; a < old_size + 1; a++)
		{
			free(p + a);
		}
		return (ptr);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	copyp(p, ptr, old_size);
	free(ptr);
	return (p);
}
