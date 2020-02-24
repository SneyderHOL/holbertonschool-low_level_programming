#include "holberton.h"

/**
 *_memcpy - copies memory area.
 *@dest: char pointer
 *@src: char pointer
 *@n: unsigned integer
 *Return: a char pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(dest + a) = *(src + a);
	}
	return (dest);
}
