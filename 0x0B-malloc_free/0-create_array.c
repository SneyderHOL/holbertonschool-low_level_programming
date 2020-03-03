#include "holberton.h"
/**
 *create_array - creates an array of chars and initializes it with a specific
 *char
 *@size: unsigned int argument
 *@c: char argument
 *Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
	char *poin = NULL;

	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	poin = malloc(size);
	if (poin == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(poin + i) = c;
	return (poin);
}
