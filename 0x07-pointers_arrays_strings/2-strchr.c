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

	for (a = 0; *(s + a) != 0; a++)
	{
		if (c == *(s + a))
		{
			break;
		}
	}
	return (s + a);
}
