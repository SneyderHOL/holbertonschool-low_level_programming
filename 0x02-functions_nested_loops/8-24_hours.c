#include "holberton.h"

/**
 *jack_bauer - print every minute of the day of Jack Bauer
 *
 *
 */
void jack_bauer(void)
{
	int n, x, y, z;

	for (n =0; n < 3; n++)
	{
		for (x=0; x < 10; x++)
		{
			if (n == 2 && x == 4)
				break;
			for (y=0; y < 6; y++)
			{
				for (z=0; z < 10; z++)
				{
					_putchar(n + '0');
					_putchar(x + '0');
					_putchar(58);
					_putchar(y + '0');
					_putchar(z + '0');
					_putchar(10);
				}
			}
		}
	}
}
