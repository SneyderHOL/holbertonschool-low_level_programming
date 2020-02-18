#include "holberton.h"

/**
 *puts_half - prints half of a string
 *
 *@str: char pointer
 *
 */
void puts_half(char *str)
{
	int a, b;

	for (a = 0; *(str + a) != 0; a++)
	{
	}
	if (a % 2 != 0 && a != 1)
		a += 1;
	for (b = a / 2; b < a; b++)
		_putchar(*(str + b));
	_putchar(10);
}
