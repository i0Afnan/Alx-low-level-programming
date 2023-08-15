#include "main.h"

/**
 * jack_bauer - a function to count the day's hourse and minutes.
 *
 *
 * Return: hourse and minutes
 */
void jack_bauer(void)
{
	char i = '0', j, k, n;

	while (i < '3')
	{
		j = '0';
		while (j <= '9')
		{
			k = '0';
			while (k < '6')
			{
				n = '0';
				while (n <= '9')
				{
					_putchar(i);
					if (i == 2)
					{
						_putchar('3');
					}
					else
					{
						_putchar(j);
					}
					_putchar(':');
					_putchar(k);
					_putchar(n);
					_putchar('\n');
					n++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	_putchar('\n');
}
