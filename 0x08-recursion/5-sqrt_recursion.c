#include "holberton.h"
/**
 *root - returns the natural square root of a number
 *@n: integer to operate
 *@aux: integer to operate
 *
 *Return: integer
 */
int root(int n, int aux)
{
	if (n < 0)
		return (-1);
	if (aux * aux == n)
		return (aux);
	if (aux < n)
		aux = root(n, aux + 1);
	else
		return (-1);
	return (aux);
}

/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: integer to operate
 *
 *Return: integer
 */
int _sqrt_recursion(int n)
{
	return (root(n, 0));
}
