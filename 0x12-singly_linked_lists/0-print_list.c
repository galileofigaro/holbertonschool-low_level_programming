#include "lists.h"

/**
 * print_list - Print elements of list
 *@h: list being printed
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int nodeCount;

	for (nodeCount = 0; h != NULL; nodeCount++)
	{
		if (str == NULL)
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}

	return (nodeCount);

}
