#include "holberton.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number to get the bit from
 * @index: is the index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index or -1, if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int aux = n;

	while (aux > 1)
	{
		if (index == 0)
			return (aux & 1);
		aux = aux >> 1;
		index--;
	}
	if (index == 0)
		return (aux & 1);
	else
		return (-1);
}
