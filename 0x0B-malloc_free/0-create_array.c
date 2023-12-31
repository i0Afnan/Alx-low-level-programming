#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates array of chars and initialize it with a char
 *
 * @size: size of the array
 * @c: character to initialize the array with
 *
 * Return: pointer to the array, NULL otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);

	if (arr == NULL || size == 0)
	{
		return (0);
	}
	else
	{
		unsigned int i = 0;

		for (; i < size; i++)
		{
			arr[i] = c;
		}
	}
	return (arr);
}
