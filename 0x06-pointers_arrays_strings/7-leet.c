#include "holberton.h"

/**
 * leet - encodes a string into 1337.
 *@n: char pointer
 *
 *
 *Return: char pointer
 */
char *leet(char *n)
{
	int let[] = {97, 65, 101, 69, 111, 79, 116, 84, 108, 76};

	int num[] = {52, 51, 48, 55, 49};

	int a, b, e = 10;

	for (a = 0; *(n + a) != 0; a++)
	{
		for (b = 0; b < e; b++)
		{
			if (*(n + a) == let[b])
			{
				*(n + a) = num[b / 2];
			}
		}
	}
	return (n);
}
