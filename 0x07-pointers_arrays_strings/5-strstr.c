#include "holberton.h"

/**
 *_strstr - locates a substring.
 *@haystack: char pointer
 *@needle: char pointer
 *
 *Return: char pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int aux = 0, b, index = 0;

	for (b = 0; *(haystack + b) != 0; b++)
	{
		if (*(haystack + b) != *(needle + aux))
			continue;
		if (index == 0)
			index = b;
		aux++;
	}
	return (haystack + index);
}
