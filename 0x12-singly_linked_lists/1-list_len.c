#include "lists.h"

/**
 * list_len - returns the number of elements in linkedlist
 *
 * @h: head
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
