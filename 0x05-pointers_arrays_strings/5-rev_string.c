#include "holberton.h"

/**
 *rev_string - reverse a string
 *@s: char pointer
 *
 *
 */
void rev_string(char *s)
{
	int a, b, aux;

	for (a = 0; *(s + a) != 0; a++)
	{
	}
	a -= 1;
	for (b = 0; b < a; b++)
	{
		aux = *(s + b);
		*(s + b) = *(s + a);
		*(s + a) = aux;
		a--;
	}
}
