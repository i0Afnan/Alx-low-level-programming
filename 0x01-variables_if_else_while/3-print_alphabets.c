#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lo = 'a', up = 'A';

	while (lo <= 'z')
	{
		putchar(lo);
		lo++;
	}
	for (; up <= 'Z'; up++)
	{
		putchar(up);
	}

	putchar('\n');
	return (0);
}
