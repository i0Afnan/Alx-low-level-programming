#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - Returns a copy of a string
 *
 * @str: string to be copied
 *
 * Return: a pointer on success, NULL otherwise
 */
char *_strdup(char *str)
{
	int size = 0, i = 0;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	for (; str[size] != '\0'; size++)
		;

	dup = malloc(size * sizeof(*str) + 1);

	if (dup == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
		{
			dup[i] = str[i];
		}
	}
	return (dup);
}
