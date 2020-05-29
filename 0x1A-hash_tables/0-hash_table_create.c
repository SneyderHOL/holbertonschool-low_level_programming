#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int count = 0;
	hash_table_t *hash_t = NULL;

	hash_t = malloc(sizeof(hash_table_t) * 1);
	if (hash_t == NULL)
		return (NULL);
	hash_t->size = size;
	if (size == 0)
		hash_t->array = NULL;
	else
		hash_t->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_t->array != NULL)
		for (; count < size; count++)
			hash_t->array[count] = NULL;
	return (hash_t);
}
