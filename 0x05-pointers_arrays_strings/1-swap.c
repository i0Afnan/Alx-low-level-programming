#include "main.h"

/**
 * swap_int - Swap integers
 *
 * @a: First integer
 *
 * @b: Second integer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
