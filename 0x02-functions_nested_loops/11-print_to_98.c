#include "main.h"

/**
 * print_to_98 - print to number 98
 *
 * @n: number to print
 *
 * Return: numbers to 98
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		i = n;
		while (i > 98)
		{
			printf("%d, ", i);
			i--;
		}
	}
	else
	{
		i = n;
		while (i < 98)
		{
			printf("%d, ", i);
			i++;
		}
	}
	printf("98\n");
}
