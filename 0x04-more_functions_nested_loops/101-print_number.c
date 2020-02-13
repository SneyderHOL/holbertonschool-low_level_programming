#include "holberton.h"
/**
 *print_number - prints an integer
 *@n: integer to evaluate
 *
 */
void print_number(int n)
{
	int i = 1, c = 45, a, aux = 1;

	if(n < 0)
	{
		_putchar(c);
		n = n * -1;
	}
	a = n;
	while (a / 10 != 0)
	{
		i++;
		aux = aux * 10;
		a = a / 10;
	}
	if(i > 1)
	{
		a = n;
		if()
		{

		}
	}
	else
	{
		_putchar(n + '0');
	}
}
