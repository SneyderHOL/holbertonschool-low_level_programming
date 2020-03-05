#include "holberton.h"
/**
 *string_lenght - calculates the length of a string
 *@s: char pointer argument
 *Return: unsigned integer
 *
 */
unsigned int string_lenght(char *s)
{
	unsigned int aux = 0;

	for (aux = 0; *(s + aux); aux++)
	{
	}
	return (aux);
}
/**
 *string_nconcat - concatenates two strings.
 *@s1: char pointer argument
 *@s2: char pointer argument
 *@n: unsigned int argument
 *Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p = NULL;

	unsigned int a = 0, b = 0, i = 0, j = 0, aux = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = string_lenght(s1);
	b = string_lenght(s2);
	p = malloc((a + b + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	if (n >= b)
		n = b;
	for (i = 0; i < a; i++)
	{
		*(p + aux) = *(s1 + i);
		aux++;
	}
	for (j = 0; j < n; j++)
	{
		*(p + aux) = *(s2 + j);
		aux++;
	}
	*(p + aux) = '\0';
	if (p == NULL)
		return (NULL);
	return (p);
}
