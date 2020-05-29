#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the hash table to add or update the key/value
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *aux = NULL, *tmp = NULL, *element = NULL;
	unsigned long int idx = 0;
	char *str_tmp = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	element = malloc(sizeof(hash_node_t));
	if (element == NULL)
		return (0);
	element->key = strdup(key);
	element->value = strdup(value);
	element->next = NULL;
	idx = key_index((unsigned char *) element->key, ht->size);
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = element;
		return (1);
	}
	aux = ht->array[idx];
	tmp = aux;
	while (aux != NULL)
	{
		tmp = aux;
		if (strcmp(aux->key, key) == 0)
		{
			str_tmp = aux->value;
			aux->value = strdup(value);
			free(element->key);
			free(element->value);
			free(element);
			free(str_tmp);
			return (1);
		}
		aux = aux->next;
	}
	tmp = ht->array[idx];
	element->next = tmp;
	ht->array[idx] = element;
	return (1);
}
