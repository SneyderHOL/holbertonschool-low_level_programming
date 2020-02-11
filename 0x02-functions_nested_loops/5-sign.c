#include "holberton.h"
/**
 *print_sign - prints the sign of a number
 *
 *Return: 1 if character is grater than zero, -1 is less than zero, 0 if zero
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar(43);
		return 1;
	}
	else if (c < 0)
	{
		_putchar(45);
		return -1;
	}
	else
	{
		_putchar(48);
		return 0;
	}
}
