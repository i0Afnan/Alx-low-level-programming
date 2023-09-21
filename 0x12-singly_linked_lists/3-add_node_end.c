#include "lists.h"

/**
 * add_node_end - adds new node at the end of a list
 *
 * @head: head of the list
 * @str: string to be added
 *
 * Return: the address of the new element, NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add_node = malloc(sizeof(list_t));
	list_t *node = *head;


	if (head == NULL || add_node == NULL)
		return (NULL);

	if (str)
	{
		add_node->str = strdup(str);

		if (add_node->str == NULL)
		{
			free(add_node);
			return (NULL);
		}

		add_node->len = _strlen(add_node->str);
	}

	if (node)
	{
		while (node->next)
			node = node->next;

		node->next = add_node;
	}
	else
		*head = add_node;
	return (add_node);
}

