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
	if (s1[0] < s2[0])
		return (s1[0] - s2[0]);
	if (s1[0] > s2[0])
		return (s1[0] - s2[0]);
	return (0);
}
