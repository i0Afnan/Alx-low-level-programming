#include "lists.h"

/**
 * _strlen - a function to count the length of a string
 *
 * @s: a variable of type string
 *
 * Return: The length of a stringi, 0 if null
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * print_list - a function that prints all the elements of a list.
 *
 * @h: head
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		printf("[0] (nil)\n");
		else
		printf("[%d] %s\n", _strlen(h->str), h->str);

		h = h->next;
		count++;
	}
	return (count);
}
