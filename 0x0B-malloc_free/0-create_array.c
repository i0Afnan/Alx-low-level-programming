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
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		char *arr;
		unsigned int i = 0;

		arr = malloc(size * sizeof(char));

		for (; i < size; i++)
		{
			arr[i] = c;
		}
		return (arr);
	}
}
