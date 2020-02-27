#include "holberton.h"
/**
 *eval - evaluate characters.
 *@s: char pointer
 *@aux: char
 *Return: integer
 */
int eval(char *aux, char *s)
{
	int i = 1;

	if (aux != s)
	{
		if (*aux == *s)
			i = (eval(aux + 1, s - 1));
		else
			return (0);
	}
	if (s + 1 == aux)
		return (1);
	return (i);
}
/**
 *is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *@s: char pointer
 *
 *Return: integer
 */
int is_palindrome(char *s)
{
	char *aux = NULL;

	int i = 0;

	if (*s == 0)
		return (0);
	aux = s;
	while (*(s + 1))
	{
		s++;
	}
	if (aux + 1 != s)
	{
		if (*aux == *s)
			i = eval(aux + 1, s - 1);
		else
			return (0);
	}
	else
		i = 0;
	return (i);
}
