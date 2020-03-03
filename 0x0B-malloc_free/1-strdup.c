#include "holberton.h"
/**
 *_strdup - returns a pointer to a newly allocated space in memory, which
 *contains a copy of the string given as a parameter
 *@str: char pointer argument
 *
 *Return: char pointer
 */
char *_strdup(char *str)
{
	char *poin = NULL;

	int i, j = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; *(str + i); i++)
	{
		j++;
	}
	poin = malloc(j);
	for (i = 0; i < j; i++)
		*(poin + i) = *(str + i);
	return (poin);
}
