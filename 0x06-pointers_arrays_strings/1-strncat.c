#include "holberton.h"

/**
 * _strncat - concatenates two strings.
 *@dest: char pointer
 *@src: char pointer
 *@n: integer
 *Return: char pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b, c = 0;

	for (a = 0; *(dest + a) != 0; a++)
	{
	}
	for (b = 0; *(src + b) != 0; b++)
	{
	}
	if (b > n)
		b = n;
	for (c = 0; c < b; c++)
	{
		*(dest + a) = *(src + c);
		a++;
	}
	return (dest);
}
