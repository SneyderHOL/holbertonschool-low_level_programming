#include "holberton.h"
/**
 *last - last position of a pointer.
 *@p: char pointer
 *
 *Return: integer
 */
int last(char *p)
{
	if (*p != 0)
	{
		p++;
		return (1 + last(p));
	}
	return (0);
}
/**
 *eval - evaluate characters.
 *@aux: char pointer
 *@a: integer
 *@b: integer
 *Return: integer
 */
int eval(char *aux, int a, int b)
{
	int comp = a - b - 1;

	if (b >= (a / 2))
		return (1);
	if (*(aux + b) == *(aux + comp))
		return (eval(aux, a, b + 1));
	return (0);
}
/**
 *is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *@s: char pointer
 *
 *Return: integer
 */
int is_palindrome(char *s)
{
	int i = 0, a = 0;

	if (*s == 0)
		return (1);
	i = last(s);
	return (eval(s, i, a));
}
