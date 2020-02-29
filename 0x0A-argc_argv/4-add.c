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
	int suma = 0, a = 1;

	if (argc > 1)
	{
		for (; a < argc; a++)
		{
			if ((*argv[a] > 47 && *argv[a] < 58) || atoi(argv[a]) != 0)
				suma += atoi(argv[a]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", suma);

	return (0);
}
