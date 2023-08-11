#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lo = 'a';

	while (lo <= 'z' && lo != 'e' && lo != 'q')
	{
		putchar(lo);
		lo++;
	}

	putchar('\n');
	return (0);
}
