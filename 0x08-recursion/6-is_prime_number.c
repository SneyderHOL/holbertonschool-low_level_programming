#include "holberton.h"
/**
 *prime - returns 1 if the number is prime number 0 otherwise
 *@n: integer to operate
 *@aux: integer to operate
 *Return: integer
 */
int prime(int n, int aux)
{
	if (n <= 1)
		return (0);
	if (aux < n && (n % aux) == 0)
		return (0);
	else if (n % aux == 0 && aux == n)
	{
		aux = 1;
	}
	else
	{
		aux = prime(n, aux + 1);

	}
	return (aux);
}
/**
 *is_prime_number - returns 1 if the input integer is a prime number
 *otherwise 0
 *@n: integer to operate
 *
 *Return: integer
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
