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
	if (argc < 2)
	printf("%s\n", argv[argc -1]);
	return (0);
}
