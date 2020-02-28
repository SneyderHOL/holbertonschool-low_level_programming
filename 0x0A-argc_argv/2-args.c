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
	int a = 0;

	for (; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
