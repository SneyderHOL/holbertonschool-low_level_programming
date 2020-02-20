#include "holberton.h"

/**
 * _strcat - concatenates two strings.
 *@dest: char pointer
 *@src: char pointer
 *
 *Return: char pointer
 */
char *_strcat(char *dest, char *src)
{
	int a;

	for (a = 0; *(dest + a) != 0; a++)
	{
	}
	while (*src != 0)
	{
		*(dest + a) = *src;
		src++;
		a++;
	}
	*(dest + a) = *src;
	return (dest);
}
