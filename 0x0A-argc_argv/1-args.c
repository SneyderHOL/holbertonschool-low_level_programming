#include "holberton.h"
#include <stdio.h>
/**
 *main - Entry point
 *@argc: integer
 *@argv: an array of pointers
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a = 0, b = 0;

	for (; a < argc; a++)
	{
		b += *argv[a];
	}
	printf("%d\n", argc - 1);
	return (0);
}
