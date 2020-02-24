#include "holberton.h"

/**
 * rot13 - encodes a string into rot13.
 *@n: char pointer
 *
 *
 *Return: char pointer
 */
char *rot13(char *n)
{
	int a, b, e = 52;

	char let[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char val[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; *(n + a) != 0; a++)
	{
		for (b = 0; b < e; b++)
		{
			if (*(n + a) == let[b])
			{
				*(n + a) = val[b];
				break;
			}
		}
	}
	return (n);
}
