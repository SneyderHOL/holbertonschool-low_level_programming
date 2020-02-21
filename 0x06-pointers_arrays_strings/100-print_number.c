#include "holberton.h"
#include <stdlib.h>
/**
 *print_number - prints an integer
 *@n: integer to evaluate
 *
 */
void print_number(int n)
{
	int e = 45;

	unsigned int a = 0, b = 10, aux = 1, c = 0;

	if (n < 0)
	{
		_putchar(e);
		n = n * -1;
	}
	a = n;
	c = n;
	if (c > 9)
	{
		while (a > 9)
		{
			aux *= 10;
			b = a;
			a = c / aux;
		}
		_putchar((b / 10) + '0');
		a = n;
		while (aux >= 10)
		{
			aux = aux / 10;
			if (aux == 1)
			{
				a = c % 10;
				break;
			}
			else
			{
				b = a / aux;
			}
			_putchar((b % 10) + '0');
		}
	}
	if (a < 10)
	{
		_putchar(a + '0');
	}
}
