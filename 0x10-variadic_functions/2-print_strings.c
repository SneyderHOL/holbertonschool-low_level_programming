#include "variadic_functions.h"
/**
 *print_strings - function that prints strings
 *@separator: char pointer argument
 *@n: integer argument
 *@...: unnamed argument
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a = 0;
	va_list ap;
	char *s = NULL;

	if (separator == NULL)
		return;
	va_start(ap, n);
	for (; a < n; a++)
	{
		s = va_arg(ap, char *);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
		if (a != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
