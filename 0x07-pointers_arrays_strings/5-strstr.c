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
	unsigned int aux = 0, a = 0, b = 0, index = 0;

	for (a = 0; *(haystack + a) != 0; a++)
	{
		if (*(haystack + a) == *(needle + b))
		{
			index = a;
			a++;
			aux = 1;
			for (b++; *(needle + b) != 0 && aux == 1; b++)
			{
				if (*(haystack + a) == *(needle + b))
				{
					a++;
				}
				else
				{
					aux = 0;
					break;
				}
			}
		}
		if (aux == 1)
			return (haystack + index);
	}
	return (NULL);
}
