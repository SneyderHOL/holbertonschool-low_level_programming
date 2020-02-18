#include "holberton.h"

/**
 *_strcpy - copies the string pointed to by src, including the terminating
 *null byte (\0), to the buffer pointed to by dest
 *@dest: char pointer
 *@src: char pointer
 *Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int b;

	for (b = 0; *(src + b) != '\0'; b++)
	{
		*(dest + b) = *(src + b);
	}
	*(dest + b) = *(src + b);
	return (dest);
}
