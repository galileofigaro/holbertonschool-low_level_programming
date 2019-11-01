#include "lists.h"

/**
 * free_list - frees a linked list
 *@head: pointer to first node
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (!head)
		return;

	temp = head;

	while (temp)
	{
		free(temp->str);
		free(temp);
		temp = temp->next;
	}


}
