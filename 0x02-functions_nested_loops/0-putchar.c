#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char put[] = "_putchar";
	unsigned char i = '0';

	while (i < '8')
	{
		_putchar(put[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
