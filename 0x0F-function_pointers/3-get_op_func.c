#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *get_op_func - selects the operation to perform
 *@s: char pointer argument
 *
 *Return: A pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	for (i = 0; i < 5; i++)
	{
		if (ops[i].op[0] == s[0])
		{
			return (ops[i].f);
		}
	}
	return (NULL);
}
