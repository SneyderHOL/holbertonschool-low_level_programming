#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
int cents(int aux);
/**
 *main - Entry point
 *@argc: integer
 *@argv: an array of pointers
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int aux = 0, a = 0;

	if (argc == 2)
	{
		aux = atoi(argv[1]);
		a = cents(aux);
		printf("%d\n", a);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
/**
 *cents - minimum number of coins to make change for an amount of money
 *@aux: integer
 *
 *Return: integer
 */
int cents(int aux)
{
	int a = 0;

	if (aux <= 0)
	{
		return (0);
	}
	while (aux > 0)
	{
		if (aux % 25 < aux)
		{
			aux -= 25;
			a++;
		}
		else if (aux % 10 < aux)
		{
			aux -= 10;
			a++;
		}
		else if (aux % 5 < aux)
		{
			aux -= 5;
			a++;
		}
		else if (aux % 2 < aux)
		{
			aux -= 2;
			a++;
		}
		else
		{
			aux -= 1;
			a++;
		}
	}
	return (a);
}
