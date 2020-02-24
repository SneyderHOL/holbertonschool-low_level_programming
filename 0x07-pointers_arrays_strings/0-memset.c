#include "holberton.h"

/**
 *_memset - fills memory with a constant byte.
 *@s: char pointer
 *@b: char variable
 *@n: unsigned integer
 *Return: a char pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(s + a) = b;
	}
	return (s);
}
