#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 *
 * @head: head of the list
 * @str: string to be added
 *
 * Return: the address of the new elements, Null if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	if (head == NULL || node == NULL)
		return (NULL);

	if (str)
	{
		node->str = strdup(str);

		if (node->str == NULL)
		{
			free(node);
			return (NULL);
		}

		node->len = _strlen(node->str);
	}
	node->next = *head;
	*head = node;

	return (node);
}
