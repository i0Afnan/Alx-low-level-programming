#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array of elements
 * @size: size of the array
 * @cmp: a pointer to the function to be used
 *
 * Return: the index of th efirst element, -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		for (; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	return (-1);
}
