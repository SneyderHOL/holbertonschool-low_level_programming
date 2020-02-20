#include "holberton.h"

/**
 * _strcmp - compares two strings.
 *@s1: char pointer
 *@s2: char pointer
 *
 *Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int a, b;

	for (a = 0; *(s1 + a) != 0; a++)
	{
	}
	for (b = 0; *(s2 + b) != 0; b++)
	{
	}
	if (a < b)
		return (-15);
	if (a > b)
		return (15);
	return (0);
}
