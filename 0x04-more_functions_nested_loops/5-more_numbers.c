#include "holberton.h"
/**
 *more_numbers - prints 10 times the numbers, from 0 to 14
 *
 *
 */
void more_numbers(void)
{
	int a, b, z, y;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			z = b;
			y = -1;
			if (b > 9)
			{
				z = b / 10;
				y = b % 10;
			}
			_putchar(z + '0');
			if (y >= 0)
			{
				_putchar(y + '0');
			}
		}
		_putchar(10);
	}
}
