#include "holberton.h"

/**
 *_strpbrk - searches a string for any of a set of bytes.
 *@s: char pointer
 *@accept: char pointer
 *
 *Return: char pointer
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int aux = 0, a = 0, b;

	for (b = 0; *(s + b) != 0; b++)
	{
		for (a = 0; *(accept + a) != 0; a++)
		{
			if (*(s + b) == *(accept + a))
			{
				aux = b;
				break;
			}
		}
		if (aux != 0)
			break;
	}
	if (aux == 0)
		return (NULL);
	return (s + aux);
}
