#include "holberton.h"
/**
 *print_number - prints an integer
 *@n: integer to evaluate
 *
 */
void print_number(int n)
{
	int a = n, b = 10, e = 45, aux;

	if (n < 0)
	{
		_putchar(e);
		n = n * -1;
		a = n;
	}
	if (n > 9)
	{
		a = n;
		while (b <= n)
		{
			aux = b;
			b = b * 10;
		}
		b = a;
		_putchar((a / aux) + '0');
		while (b >= 10)
		{
			aux = aux / 10;
			if (aux == 1)
			{
				a = n % 10;
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
