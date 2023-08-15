#include "main.h"

/**
 * print_alphabet - prints alphabet in lower case
 *
 * Return: alphabet
 */
void print_alphabet(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
