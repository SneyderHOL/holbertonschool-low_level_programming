#include "3-calc.h"
#include "function_pointers.h"
/**
 *main - Entry point
 *@argc: integer argument
 *@argv: array of pointer argument
 *Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operation = get_op_func(argv[2]);
	if (argv[2][1] != '\0' || (!operation))
	{
		printf("Error\n");
		exit(100);
	}
	if (*argv[3] == '0' && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", (get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]))));
	return (0);
}
