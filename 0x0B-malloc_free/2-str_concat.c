#include "holberton.h"
/**
 *concat - copy a string.
 *@i: integer argument
 *@j: integer argument
 *@p: char pointer
 *@s: char pointer
 *Return: integer
 */
int concat(int i, int j, char *p, char *s)
{
	int a = i, b = 0;

	for (; a < (i + j); a++, b++)
		*(p + a) = *(s + b);
	return (a);
}

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

	int i = 0, j = 0, a = 0;

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
		poin = (char *) malloc((i + j + 1) * sizeof(char));
		a = concat(0, i, poin, s1);
		a = concat(i, j, poin, s2);
		*(poin + a) = *(s2 + a - i);
	}
	else if (i != 0)
	{
		poin = (char *) malloc((i + 1) * sizeof(char));
		a = concat(0, i, poin, s1);
		*(poin + a) = *(s1 + a);
	}
	else
	{
		poin = (char *) malloc((j + 1) * sizeof(char));
		a = concat(0, j, poin, s2);
		*(poin + a) = *(s2 + a);
	}
	return (poin);
}
