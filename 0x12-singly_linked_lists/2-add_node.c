#include "lists.h"
#include <string.h>
/**
 * add_node - function that adds a new node at the beginning of a
 * list_t list.
 * @head: pointer to a list_t pointer argument
 * @str: char pointer argument
 * Return: the number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int cont = 0;
	list_t *node = NULL, *aux = NULL;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->next = NULL;
	while ((node->str)[cont] != '\0')
		cont++;
	node->len = cont;
	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		aux = *head;
		node->next = aux;
		*head = node;
	}
	return (node);
}
