#include "holberton.h"

/**
 *_atoi - convert a string to an integer
 *
 *@s: char pointer
 *Return: int
 */
int _atoi(char *s)
{
	int a, aux = 1, num = false, n = 0, b;

	for (a = 0; *(s + a) != 0; a++)
	{
		if (*(s + a) == '-')
			aux *= -1;
		if (*(s + a) == '+')
			aux *= 1;
		if (*(s + a) > 47 && *(s + a) < 58)
		{
			num = true;
			if (n > 0 && num)
				n *= 10;
			n = *(s + a) - '0';
		}
		else if (n > 0 && num)
			break;
	}
	return (aux * n);
}
