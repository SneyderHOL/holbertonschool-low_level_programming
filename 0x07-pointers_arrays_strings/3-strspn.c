#include "holberton.h"

/**
 *_strspn - gets the length of a prefix substring.
 *@s: char pointer
 *@accept: char pointer
 *
 *Return: an unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int aux = 0, a = 0, b;

	for (b = 0; *(s + b) != 0 && *(accept + a) != 0; b++)
	{
		for (a = 0; *(accept + a) != 0; a++)
		{
			if (*(accept + a) == *(s + b))
			{
				aux++;
				break;
			}
		}
	}
	return (aux);
}
