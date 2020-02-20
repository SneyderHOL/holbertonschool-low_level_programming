#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *@n: char pointer
 *
 *
 *Return: char pointer
 */
char *string_toupper(char *n)
{
	int b;

	for (b = 0; *(n + b) != 0; b++)
	{
		if(*(n + b) > 96 && *(n + b) < 123)
	        {
			*(n + b) -= 32;
		}
	}
	return (n);
}
