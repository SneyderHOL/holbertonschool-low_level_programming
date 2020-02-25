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
	int aux = 0, a = 0, b = 0, index = -1, res = 0;

	for (; *(needle + res); res++)
	{
	}
	for (; *(needle + a) != 0; a++)
	{
		for (; *(haystack + b) != 0; b++)
		{
			if (*(needle + a) == *(haystack + b))
			{
				if (index == -1)
					index = b;
				b++;
				aux++;
				break;
			}
			else if (aux < res)
			{
				index = -1;
				aux = 0;
				a = 0;
			}
		}
		if (*(haystack + b) == 0)
			break;
	}
	if (aux < res)
		return (NULL);
	if (index >= 0)
		return (haystack + index);
	return (NULL);
}
