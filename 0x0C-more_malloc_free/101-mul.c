#include "holberton.h"
#include <ctype.h>
/**
 *main - multiplies two positive numbers
 *@argc: int argument
 *@argv: pointer array
 *Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int a = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (a = 0; argv[1][a]; a++)
	{
		if (!isdigit(argv[1][a]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (a = 0; argv[2][a]; a++)
	{
		if (!isdigit(argv[2][a]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	a = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", a);
	return (0);
}
