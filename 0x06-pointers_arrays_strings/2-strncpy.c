#include "holberton.h"

/**
 * _strncpy - copies a string.
 *@dest: char pointer
 *@src: char pointer
 *@n: integer
 *Return: char pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a, b, c = 0;

	for (a = 0; *(dest + a) != 0; a++)
	{
	}
	for (b = 0; *(src + b) != 0; b++)
	{
	}
	if (a < b)
		return (NULL);
	for (c = 0; c < n; c++)
	{
		if (c < b)
			*(dest + c) = *(src + c);
		else
			*(dest + c) = 0;
	}
	return (dest);
}
