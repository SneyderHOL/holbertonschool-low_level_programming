#include "holberton.h"
/**
 *malloc_checked - allocate memory using malloc
 *@b: unsigned int argument
 *
 *Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p = NULL;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
