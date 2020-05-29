#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: the hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *aux = NULL;
	unsigned long int i = 0;
	char *ext = NULL;

	if (ht == NULL)
		return;
	printf("{");
	ext = "";
	for (; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		aux = ht->array[i];
		while (aux != NULL)
		{
			printf("%s'%s': '%s'", ext, aux->key, aux->value);
			ext = ", ";
			aux = aux->next;
		}
	}
	puts("}");
}
