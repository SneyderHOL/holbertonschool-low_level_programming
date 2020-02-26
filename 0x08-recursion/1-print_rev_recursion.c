#include "holberton.h"

/**
 *print_rev_recursion - prints a string in reverse
 *@s: char pointer
 *
 *
 */
void _print_rev_recursion(char *s)
{
	char aux = 0;
	if (*s)
	{
		aux = *s;
		_print_rev_recursion(++s);
		_putchar(aux);
	}
}
