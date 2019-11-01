#include "lists.h"

/**
 * add_node - prints all elements of a list_t list
 *@head: pointer to first node
 *@str: string
 * Return: address of new element, or NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);

	node->len = _strlen(str);
	node->str = strdup(str);
	node->next = *head;
	*head = node;
	return (node);
}


/**
 * _strlen - get string length
 *@s: string char
 * Return: string length
 */

int _strlen(const char *s)
{
	int i;

	while (s[i] != 0)
		i++;
	return (i);
}
