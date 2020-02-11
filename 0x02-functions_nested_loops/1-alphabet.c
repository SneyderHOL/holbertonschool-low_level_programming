#include "holberton.h"
/**
 *pritn_alphabet - code for printing the alphabet
 *
 *Return: no return value
 */
void print_alphabet(void)
{
	int x;

	for (x = 97; x < 123; x++)
	{
		_putchar(x);
	}
	_putchar(10);
}
