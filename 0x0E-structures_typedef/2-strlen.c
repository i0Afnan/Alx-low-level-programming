#include "dog.h"

/**
 * _strlen - a function to count the length of a string
 *
 * @s: a variable of type string
 *
 * Return: The length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

