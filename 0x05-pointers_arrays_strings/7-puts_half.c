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
	if (a % 2 != 0)
		b =  (a - 1) / 2;
	else
		b = (a / 2) - 1;
	for (b += 1; b < a; b++)
		_putchar(*(str + b));
	_putchar(10);
}
