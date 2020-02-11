#include "holberton.h"

/**
 *print_last_digit - print the last digit of a number
 *@a: int value to operate
 *Return: return the value of the last digit
 */
int print_last_digit(int a)
{
	int n = a % 10;

	if (a < 0)
	{
		n *= -1;
	}

	_putchar(n + '0');
	return (n);
}
