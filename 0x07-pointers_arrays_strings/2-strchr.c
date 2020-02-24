#include "holberton.h"

/**
 *_strchr - locates a character in a string.
 *@s: char pointer
 *@c: char variable
 *
 *Return: a char pointer
 */
char *_strchr(char *s, char c)
{
	unsigned int a;

	char aux = *s;

	for (a = 0; *(s + a) != 0; a++)
	{
		if (c == *(s + a))
		{
			s = (s + a);
			break;
		}
	}
	if (aux == *s)
		s = NULL;
	return (s);
}
