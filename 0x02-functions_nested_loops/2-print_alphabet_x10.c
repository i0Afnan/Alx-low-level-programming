#include "main.h"

/**
 * print_alphabet_x10 - a function to be called
 *
 * Return: print alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int alpha;
	int i = 0;

	while (i < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		i++;
	}
}
