#include "holberton.h"
/**
 *_calloc - allocates memory for an array using malloc
 *@nmemb: unsigned int argument
 *@size: unsigned int argument
 *Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int b = 0;

	char *p = NULL;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (b = 0; b < nmemb * size; b++)
	{
		*(p + b) = 0;
	}
	return (p);
}
