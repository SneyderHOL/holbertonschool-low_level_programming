#include "holberton.h"
/**
 *argstostr - concatenates all the arguments of the program.
 *@ac: integer argument
 *@av: 2 dimensional char array argument
 *Return: char pointer
 *
 */
char *argstostr(int ac, char **av)
{
	char *ar = NULL;

	int a = 0, b = 0, num = 0, aux = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
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
		for (b = 0; av[a][b]; b++)
		{
			ar[aux] = av[a][b];
			aux++;
		}
		ar[aux] = '\n';
		aux++;
	}
	return (ar);
}
