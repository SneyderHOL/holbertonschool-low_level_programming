#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - function that prints a name
 * @argc: pointer to a char
 * @argv: pointer to a function
 * Return: the operation
 */
int main(int argc, char *argv[])
{
	int (*oper)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	oper = get_op_func(argv[2]);
	if (argv[2][1] != '\0' || (!oper))
	{
		printf("Error\n");
		exit(99);
	}
	if (*argv[3] == '0' && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", (get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]))));
	return (0);
}
