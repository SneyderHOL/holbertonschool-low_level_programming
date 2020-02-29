#include "holberton.h"
#include <stdlib.h>

/**
 *main - Entry point
 *@argc: integer
 *@argv: an array of pointers
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int aux = 0, arreglo[] = {25, 10, 5, 2, 1}, a = 0, val = 0, *ar = NULL;

	ar = arreglo;
	if (argc <= 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	aux = atoi(argv[1]);
	if (aux < 0)
	{
		printf("0\n");
	}
	else if (*argv[1] > 57 || *argv[1] < 48)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		while (aux != val)
		{
			if (aux >= (val + *ar))
			{
				val += *ar;
				a++;
			}
			else
			{
				ar++;
			}
		}
		printf("%d\n", a);
	}
	return (0);
}
