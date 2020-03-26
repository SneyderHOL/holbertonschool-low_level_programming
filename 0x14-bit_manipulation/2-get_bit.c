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

	if (index > (sizeof(n) * 8))
		return (-1);
	return ((aux >> index) & 1);

}
