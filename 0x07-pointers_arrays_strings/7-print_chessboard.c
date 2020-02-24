#include "holberton.h"

/**
 * print_chessboard - print the chessboard.
 *@a: char pointer
 *
 */
void print_chessboard(char (*a)[8])
{
	int b, i = 0;

	for (b = 0; b < 8; b++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[b][i]);
		}
		_putchar('\n');
	}
}
