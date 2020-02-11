#include "holberton.h"

/**
 *times_table - print the 9 times table
 *
 *
 */
void times_table(void)
{
	int n, x, y, z, i;

	for (n = 0; n < 10; n++)
	{
		for (x = 0; x < 10; x++)
		{
			y = n * x;
			z = y;
			i = n * (x + 1);
			if (y > 9)
			{
				while (z >= 10)
				{
					z /= 10;
				}
				_putchar(z + '0');
				y = y % 10;
				_putchar(y + '0');
			}
			else
			{
				_putchar(y + '0');
			}
			if (x < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (i < 10)
					_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
