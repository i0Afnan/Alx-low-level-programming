#include "main.h"

/**
 * times_table - displays the time table
 *
 * Return: times table
 */
void times_table(void)
{
	int i = 0, j, n = 0;

	while (i <= 9)
	{
		_putchar(48);
		j = 1;
		while (j <= 9)
		{
			n = i * j;
			_putchar(',');
			_putchar(' ');
			if (n <=9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((n / 10) + 48);
			}
			_putchar((n % 10) + 48);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
