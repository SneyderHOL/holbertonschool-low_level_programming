#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * shash_table_create - function that creates a sorted hash table.
 * @size: the size of the array
 *
 * Return: a pointer to the newly created sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int count = 0;
	shash_table_t *hash_t = NULL;

	hash_t = malloc(sizeof(shash_table_t) * 1);
	if (hash_t == NULL)
		return (NULL);
	hash_t->size = size;
	if (size == 0)
		hash_t->array = NULL;
	else
		hash_t->array = malloc(sizeof(shash_node_t *) * size);
	if (hash_t->array != NULL)
		for (; count < size; count++)
			hash_t->array[count] = NULL;
	hash_t->shead = NULL;
	hash_t->stail = NULL;
	return (hash_t);
}
/**
 * shash_table_set - function that adds an element to the sorted hash table.
 * @ht: the sorted hash table to add or update the key/value
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *aux = NULL, *tmp = NULL, *element = NULL;
	unsigned long int idx = 0;
	char *str_tmp = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	element = create_node(key, value);
	if (element == NULL)
		return (0);
	idx = key_index((unsigned char *) element->key, ht->size);
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = element;
		shash_insertion(ht, element);
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
	shash_insertion(ht, element);
	return (1);
}
/**
 * create_node - function that creates a shash_node_t
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: the created shash_node_t, or NULL if failed
 */
shash_node_t *create_node(const char *key, const char *value)
{
	shash_node_t *aux = NULL;

	aux = malloc(sizeof(shash_node_t));
	if (aux == NULL)
		return (NULL);
	aux->key = strdup(key);
	aux->value = strdup(value);
	aux->next = NULL;
	aux->snext = NULL;
	aux->sprev = NULL;
	return (aux);
}
/**
 * shash_insertion - function to insert a node to the sorted list
 * @ht: the sorted hash table to get the head and tail  of the sorted list
 * @node: node to insert in the sorted list
 */
void shash_insertion(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *aux;

	if (ht == NULL || node == NULL)
		return;
	if (ht->shead == NULL)
	{
		ht->shead = node;
		ht->stail = node;
		return;
	}
	aux = ht->shead;
	if (strcmp(node->key, ht->shead->key) < 0)
	{
		node->snext = ht->shead;
		ht->shead->sprev = node;
		ht->shead = node;
	}
	else if (strcmp(node->key, ht->stail->key) > 0)
	{
		node->sprev = ht->stail;
		ht->stail->snext = node;
		ht->stail = node;
	}
	else
	{
		while (strcmp(node->key, aux->key) > 0)
			aux = aux->snext;
		node->snext = aux;
		node->sprev = aux->sprev;
		aux->sprev->snext = node;
		aux->sprev = node;
	}
}
/**
 * shash_table_get - function that retrieves a value associated with a key.
 * @ht: the sorted hash table to look into
 * @key: the key to look for
 *
 * Return: the value associated with the element, or NULL if key couldn't be
 * found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *aux = NULL;
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
/**
 * shash_table_print - function that prints a sorted hash table.
 * @ht: the sorted hash table
 *
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *aux = NULL;
	char *ext = NULL;

	if (ht == NULL)
		return;
	printf("{");
	ext = "";
	aux = ht->shead;
	while (aux != NULL)
	{
		printf("%s'%s': '%s'", ext, aux->key, aux->value);
		ext = ", ";
		aux = aux->snext;
	}
	puts("}");
}
/**
 * shash_table_print_rev - function that prints a sorted hash table in reverse
 * order.
 * @ht: the sorted hash table
 *
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *aux = NULL;
	char *ext = NULL;

	if (ht == NULL)
		return;
	printf("{");
	ext = "";
	aux = ht->stail;
	while (aux != NULL)
	{
		printf("%s'%s': '%s'", ext, aux->key, aux->value);
		ext = ", ";
		aux = aux->sprev;
	}
	puts("}");
}
/**
 * shash_table_delete - function that deletes a sorted hash table.
 * @ht: the sorted hash table
 *
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *aux = NULL, *tmp = NULL;

	if (ht == NULL)
		return;
	aux = ht->shead;
	while (aux != NULL)
	{
		tmp = aux;
		aux = aux->snext;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}
