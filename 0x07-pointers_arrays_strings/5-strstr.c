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
	int aux = 0, a = 0, b = 0, index = -1;

	if (!*needle)
		return (haystack);
	while (*(needle + a) && *(haystack + b))
	{
		if (*(needle + a) == *(haystack + b))
		{
			if (index == -1)
				index = b;
			aux++;
			a++;
			b++;
		}
		else
		{
			b++;
			aux = 0;
			index = -1;
			a = 0;
		}
	}
	if (aux == a)
		return (haystack + index);
	return (0);
}
