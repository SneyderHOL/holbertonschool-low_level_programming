#include "holberton.h"
/**
 *print_alphabet_x10 - code for printing the alphabet
 *
 *Return: no return value
 */
void print_alphabet_x10(void)
{
	int i;

	int x;

	for (i = 0; i < 10; i++)
	{
		for (x = 97; x < 123; x++)
		{
			_putchar(x);
		}
		_putchar(10);
	}
}
