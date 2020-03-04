#include "holberton.h"
#include <stdio.h>
/**
 *argstostr - concatenates all the arguments of the program.
 *@ac: integer argument
 *@av: 2 dimensional char array argument
 *Return: char pointer
 *
 */
char *argstostr(int ac, char **av)
{
	char *ar = NULL, *test = NULL, a = 0, b = 0, num = 0, aux = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		ar = *(av + a);
		for (b = 0; *(ar + b); b++)
		{
			num++;
		}
		num++;
	}
	num++;
	ar = malloc(num * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		test = *(av + a);
		for (b = 0; *(test + b); b++)
		{
			*(ar + aux) = *(test + b);
			aux++;
		}
		*(ar + aux) = '\n';
		aux++;
	}
	*(ar + aux) = '\0';
	return (ar);
}
