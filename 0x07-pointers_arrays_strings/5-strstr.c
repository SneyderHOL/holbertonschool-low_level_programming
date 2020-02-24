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
	unsigned int aux = 0, a, b;

	for (a = 0; *(needle + a) != 0; a++)
	{
		for (b = 0; *(haystack + b) != 0; b++)
		{
			if (*(needle + a) == *(haystack + b))
			{
				aux = b;
				break;
			}
		}
		if (aux != 0)
			break;
	}
	if (aux == 0)
		return (NULL);
	return (haystack + aux);
}
