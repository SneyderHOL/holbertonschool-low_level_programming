#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main - Entry point
 *@argc: integer
 *@argv: an array of pointers
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int aux = 0, a = 0, val = 0, b = 0, cent[] = {25, 10, 5, 2, 1}, *ar = NULL;

	ar = cent;
	if (argc == 2)
	{
		aux = atoi(argv[1]);
		if (aux < 0)
		{
			printf("0\n");
			return (0);
		}
		for (; argv[1][b]; b++)
		{
			if (argv[1][b] > 57 || argv[1][b] < 48)
			{
				printf("Error\n");
				return (1);
			}
		}
		while (aux != val)
		{
			if (aux >= (val + *ar))
			{
				val += *ar;
				a++;
			}
			else
				ar++;
		}
		printf("%d\n", a);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
