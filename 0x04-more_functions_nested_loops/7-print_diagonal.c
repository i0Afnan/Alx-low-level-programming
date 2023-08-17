#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line
 *
 * @n: the \ sign
 *
 * Return: The diagonal line
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			for (j = 0; j < i; j++)
			{
			_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
