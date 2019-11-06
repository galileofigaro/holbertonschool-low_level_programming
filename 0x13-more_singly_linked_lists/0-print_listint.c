#include <stdio.h>
#include "lists.h"
/**
 * print_listint - print all elements of a list_t list
 * @h: singly linked list to print
 * Return: number of nodes in list
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	for (count = 0; h; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
