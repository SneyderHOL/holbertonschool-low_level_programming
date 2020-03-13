#include "variadic_functions.h"
/**
 *op_str - prints a string
 *@lista: va_list argument
 *
 */
void op_str(va_list lista)
{
	printf("%s", va_arg(lista, char *));
}
/**
 *op_int - prints an integer
 *@lista: va_list argument
 *
 */
void op_int(va_list lista)
{
	printf("%d", va_arg(lista, int));
}
/**
 *op_float - prints a float
 *@lista: va_list argument
 *
 */
void op_float(va_list lista)
{
	printf("%f", va_arg(lista, double));
}
/**
 *op_char - prints a character
 *@lista: va_list argument
 *
 */
void op_char(va_list lista)
{
	printf("%c", va_arg(lista, int));
}
/**
 *print_all - function that prints anything
 *@format: char pointer argument
 *@...: unnamed argument
 *
 */
void print_all(const char * const format, ...)
{
	int a = 0, b = 0;
	void (*p) () = NULL;
	char *sep = ", ";
	vf var[] = {
		{"c", op_char},
		{"i", op_int},
		{"f", op_float},
		{"s", op_str},
		{NULL, NULL}
	};
	va_list ap;
	va_start(ap, format);

	while (*(format + a) != 0)
	{
		b = 0;
		while (var[b].form != NULL)
		{
			if (var[b].form[0] == *(format + a))
			{
				p = var[b].func;
				p(ap);
				if (*(format + (a + 1)) != '\0')
					printf("%s", sep);
			}
			b++;
		}
		a++;
	}
	printf("\n");
	va_end(ap);
}
