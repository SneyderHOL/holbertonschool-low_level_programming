#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: the hash table to look into
 * @key: the key to look for
 *
 * Return: the value associated with the element, or NULL if key couldn't be
 * found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *aux = NULL;
	unsigned long int idx = 0;
	char *u_key = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	u_key = strdup(key);
	idx = key_index((unsigned char *) u_key, ht->size);
	free(u_key);
	aux = ht->array[idx];
	while (aux != NULL)
	{
		if (strcmp(aux->key, key) == 0)
			return (aux->value);
		aux = aux->next;
	}
	return (NULL);
}
