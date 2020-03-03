#include "holberton.h"
/**
 *str_concat - concatenates two strings.
 *
 *@s1: char pointer argument
 *@s2: char pointer argument
 *Return: char pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *poin = NULL;

	int i = 0, j = 0, a = 0, b = 0;

	if (!*s1 && !*s2)
		return (NULL);
	if (*s1)
		for (i = 0; *(s1 + i); i++)
		{
		}
	if (*s2)
		for (j = 0; *(s2 + j); j++)
		{
		}
	if (i != 0 && j != 0)
	{
		poin = malloc((i + j + 1) * sizeof(char));
		for (; a < i; a++)
		{
			*(poin + a) = *(s1 + a);
		}
		for (; a < (i + j); a++, b++)
			*(poin + a) = *(s2 + b);
		*(poin + a) = '\0';
	}
	else if (i != 0)
		poin = realloc(s1, (i + 1) * sizeof(char));
	else
		poin = realloc(s2, (j + 1) * sizeof(char));
	return (poin);
}
