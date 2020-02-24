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
	unsigned int aux = 0, a, b, i = 0, index = 0;

	for (a = 0; *(needle + a); a++)
	{
	}
	i = a;
	for (b = 0; *(haystack + b) != 0; b++)
	{
		for (a = aux; *(needle + a); a++)
		{
			if (*(haystack + b) != *(needle + a))
				break;
			if (index == 0)
				index = b;
			aux++;
			break;
		}
	}
	if (i == aux)
		return (haystack + index);
	else
		return (NULL);
}
