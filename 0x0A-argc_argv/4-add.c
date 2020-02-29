#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *@argc: integer
 *@argv: an array of pointers
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int suma = 0, a = 1;

	if (argc > 1)
	{
		for (; a < argc; a++)
		{
			if (*argv[a] > 47 && *argv[a] < 58)
				suma += atoi(argv[a]);
			else
			{
				printf("Error\n");
				return (0);
			}
		}
	}
	printf("%d\n", suma);

	return (0);
}
