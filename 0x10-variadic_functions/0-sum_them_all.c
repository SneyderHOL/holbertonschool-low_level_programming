#include "variadic_functions.h"
/**
 *sum_them_all - function that returns the sum of all its parameters
 *@n: integer argument
 *@...: unnamed argument
 *
 *Return: integer value
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a = 0;
	va_list ap;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (; a < n; a++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
