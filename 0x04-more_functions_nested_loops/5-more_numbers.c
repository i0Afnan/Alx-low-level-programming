#include "main.h"

/**
 * more_numbers - print to 14
 *
 * Return: number to 14
 */
void more_numbers(void)
{
	int n, i = 1, j = 0;

	for (; i <= 10; i++)
	{
		for (; j <= 14; j++)
		{
			n = j;
			if (j > 9)
			{
				_putchar(1 + 48);
				n = j % 10;
			}
			_putchar(n + 48);
		}
		_putchar('\n');
	}
}
