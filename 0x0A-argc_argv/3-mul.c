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
	int mul = 0, a = 1;

	if (argc > 2)
	{
		mul = 1;
		for (; a < argc; a++)
		{
			mul *= atoi(argv[a]);
		}
		printf("%d\n", mul);
	}
	if (argc == 1)
		printf("Error\n");
	return (0);
}
