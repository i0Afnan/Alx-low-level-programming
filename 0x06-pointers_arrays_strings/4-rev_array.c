#include "main.h"
#include "_putchar.c"

/**
 * reverse_array - a function that revereses the content of an array
 *
 * @a: Array of integers
 *
 * @n: Number of elemnt of the array
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0, tmp = 0;

	for (; i <= n; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		n--;
	}
}
