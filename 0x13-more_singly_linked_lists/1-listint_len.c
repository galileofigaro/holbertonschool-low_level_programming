#include "lists.h"
/**
 * listint_len - get the number of nodes in a list
 * @h: singly linked list to print
 * Return: number of nodes in list
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	for (count = 0; h; count++)
		h = h->next;
	return (count);
}
