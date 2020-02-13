#include "holberton.h"
/**
 *_isupper - check if a character is uppercase or not
 *@c: integer for evaluation
 *Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
