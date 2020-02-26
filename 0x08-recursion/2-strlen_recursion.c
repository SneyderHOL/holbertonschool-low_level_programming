#include "holberton.h"

/**
 *_strlen_recursion - returns the lenght of a string
 *@s: char pointer
 *
 *Return: integer
 */
int _strlen_recursion(char *s)
{
	int aux = 1;

	if (*s)
	{
		aux += _strlen_recursion(++s);
	}
	else
	{
		aux = 0;
	}
	return (aux);
}
