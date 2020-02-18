#include "holberton.h"

/**
 *swap_int - swaps the value of two integers
 *@a: int pointer
 *@b: int pointer
 *
 */
void swap_int(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}
