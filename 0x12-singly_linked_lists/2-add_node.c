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
	list_t add;

	node = &add;

	node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);
	node->str = malloc(sizeof(char) * (_strlen(str)));
	if (!node->str)
	{
		free(node);
		return (NULL);
	}

	node->str = strdup(str);
	node->len = _strlen(node->str);
	node->next = *head;
	*head = node;

	return (*head);
}


/**
 * _strlen - get string length
 *@s: string char
 * Return: string length
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != 0)
		i++;
	return (i);
}
