#include "main.h"

/**
 * jack_bauer - a function to count the day's hourse and minutes.
 *
 *
 * Return: hourse and minutes
 */
void jack_bauer(void)
{
	int h = 0, m;

	while (h <= 23)
	{
		m = 0;
		while (m <= 59)
		{
			_putchar((h / 10) + 48);
			_putchar((h % 10) + 48);
			_putchar(':');				
			_putchar((m / 10) + 48);
			_putchar((m % 10) + 48);
			_putchar('\n');
			m++;
		}
		h++;
	}
}	
