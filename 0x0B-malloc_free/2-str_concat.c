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
	for (i = 0; *(s1 + i); i++)
	{
	}
	for (j = 0; *(s2 + j); j++)
	{
	}
	poin = (char *) malloc((i + j + 1) * sizeof(char));
	if (poin == NULL)
		return (NULL);
	for (; a < i; a++)
		*(poin + a) = *(s1 + a);
	for (; b < j; a++, b++)
		*(poin + a) = *(s2 + b);
	*(poin + a) = '\0';
	return (poin);
}
