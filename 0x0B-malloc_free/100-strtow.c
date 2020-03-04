#include "holberton.h"
#include <stdio.h>
/**
 *copy - look for the first letter in a word.
 *@s1: char pointer argument
 *@s2: char pointer argument
 *@a: integer argument
 *
 */
void copy(char *s1, char *s2, int a)
{
	int b = 0;
	for (b = 0; b < a; b++)
	{
		*(s1 + b) = *(s2 + b);
	}
	*(s1 + b) = '\0';
}

/**
 *wcount - count words in a string.
  *@s: char pointer argument
 *Return: integer
 *
 */
int wcount(char *s)
{
	int a = 0, cont = 0, aux = 0;

	for (a = 0; *(s + a); a++)
	{
		if (*(s + a) > 32 && *(s + a) < 127)
			aux++;
		else
		{
			if (aux > 0)
				cont++;
		}
	}
	return (cont);
}
/**
 *lcount - count letters in a word.
  *@s: char pointer argument
  *@j: integer argument
 *Return: integer
 *
 */
int lcount(char *s, int j)
{
	int a = 0, cont = 0;

	for (a = j; *(s + j) > 32 && *(s + j) < 127; a++)
	{
		cont++;
	}
	return (cont);
}
/**
 *lword - look for the first letter in a word.
  *@s: char pointer argument
  *@j: integer argument
 *Return: integer
 *
 */
int lword(char *s, int j)
{
	int a = j;

	for (a = j; !(*(s + j) > 32 && *(s + j)) < 127; a++)
	{
	}
	return (a);
}

/**
 *strtow - splits a string into words.
  *@str: char pointer argument
 *Return: 2 dimensional char pointer
 *
 */
char **strtow(char *str)
{
	char **ar = NULL;

	int a = 0, b = 0, num = 0, aux = 0, cont = 0;

	if (str == NULL)
		return (NULL);
	num = wcount(str);
	if (num == 0)
		return (NULL);
	ar = malloc(num * sizeof(char *));
	if (ar == NULL)
		return (NULL);
	for (a = 0; a < num; a++)
	{
		aux = lword((str + aux), aux);
		b = lcount((str + aux), aux);
		*(ar + a) = malloc((b + 1) * sizeof(char));
		if ((ar + a) == NULL)
			return (NULL);
		else
			copy(ar + a, str + aux, b);
	}
	return (ar);
}
