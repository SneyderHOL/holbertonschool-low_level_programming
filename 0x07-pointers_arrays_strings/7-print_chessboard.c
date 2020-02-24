#include "holberton.h"

/**
 * print_chessboard - print the chessboard.
 *@a: char pointer
 *
 */
void print_chessboard(char (*a)[8])
{
	int b, i = 0;

	char c;

	for (b = 0; b < 8; b++)
	{
		for (i = 0; i < 8; i++)
		{
			c = a[b][i];
			if (c != ' ')
				_putchar(c);
			if (i == 7)
				_putchar('\n');
		}
	}
}
