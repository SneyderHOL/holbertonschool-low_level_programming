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
	int suma = 0, a = 1, aux = 0, b;

	if (argc > 1)
	{
		for (; a < argc; a++)
		{
			for (b = 0; argv[a][b]; b++)
			{
				if (!(argv[a][b] > 47 && argv[a][b] < 58))
				{
					printf("Error\n");
					return (1);
				}
			}
			aux = atoi(argv[a]);
			suma += aux;
		}
	}
	printf("%d\n", suma);

	return (0);
}
