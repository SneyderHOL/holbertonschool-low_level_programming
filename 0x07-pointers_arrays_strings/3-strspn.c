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
	unsigned int aux = 0, a, b;

	for (a = 0; *(accept + a) != 0; a++)
	{
		for (b = 0; *(s + b) != 0; b++)
		{
			if (*(s + b) == *(accept + a))
			{
				if (aux < b)
				{
					aux = b;
				}
				break;
			}
		}
	}
	return (aux + 1);
}
