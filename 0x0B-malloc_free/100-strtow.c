#include "holberton.h"
#include <stdio.h>
/**
 *wcount - count words in a string.
  *@s: char pointer argument
 *Return: integer
 *
 */
int wcount(*s)
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
int lcount(*s, int j)
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
int lcount(*s, int j)
{
	int a = 0, cont = 0;

	for (a = j; *(s + j) > 32 && *(s + j) < 127; a++)
	{
		cont++;
	}
	return (cont);
}

/**
 *strtow - splits a string into words.
  *@str: char pointer argument
 *Return: 2 dimensional char pointer
 *
 */
char **strtow(char *str)
{
	char **ar = NULL, *test = NULL;

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

	}
	return (ar);
}
