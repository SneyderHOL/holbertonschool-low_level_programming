#include "holberton.h"
/**
 *_isalpha - code that checks for alphabetic character
 *@c: value of the character
 *Return: 1 if character is lowercase, uppercase or letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
