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

	int j;

	if (str == NULL)
		return (NULL);
	poin = malloc(1);
	for (j = 0; *(str + j); j++)
		*(poin + j) = *(str + j);
	return (poin);
}
