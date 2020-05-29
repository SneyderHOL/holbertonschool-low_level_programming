#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: the hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *aux = NULL, *tmp = NULL;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	for (; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		aux = ht->array[i];
		while (aux != NULL)
		{
			tmp = aux;
			aux = aux->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}
