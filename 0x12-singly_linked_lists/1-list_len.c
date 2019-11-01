#include "lists.h"

/**
 * list_len - Returns the number of elements in list_t list
 *@h: pointer to first node
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);

}
