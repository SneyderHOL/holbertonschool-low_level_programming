#include "holberton.h"
/**
 *_abs - compute the absolute value of an integer
 *@c: int value to operate
 *Return: return the absolute value
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (c * (-1));
	}
	return (c);
}
