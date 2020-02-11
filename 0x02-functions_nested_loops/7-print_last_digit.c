#include "holberton.h"

/**
 *print_last_digit - print the last digit of a number
 *@a: int value to operate
 *Return: return the value of the last digit
 */
int print_last_digit(int a)
{
	int n;

	int c;

	n = a;
	if (a < 0)
	{
		n = a * -1;
	}
	n = n % 10;
	c = n + 48;
	_putchar(c);
	return (n);
}
