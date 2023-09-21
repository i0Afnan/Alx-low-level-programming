#include "lists.h"

/**
 * free_list - frees a list
 *
 * @head: head of the list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *node;
	list_t *next_nd;

	if (head == NULL)
		return;

	node  = head;

	while (node)
	{
		next_nd = node->next;
		free(node->str);
		free(node);
		node = next_nd;
	}
}
