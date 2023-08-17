#include "main.h"

/**
 * print_most_numbers - prints most numbers duh
 *
 * Return: numbers other than 2 and 4
 */
void print_most_numbers(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + 48);
		}
	}
	_putchar('\n');
}
