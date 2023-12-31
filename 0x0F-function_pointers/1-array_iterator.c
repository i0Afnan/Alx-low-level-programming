#include "function_pointers.h"

/**
 * array_iterator - executes a funtion given as a parameter
 *
 * @array: array of elements
 * @size: size of the array
 * @action: a pointer to the function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *p = array + size - 1;

	if (array && size && action)
		while (array <= p)
			action(*array++);
}
