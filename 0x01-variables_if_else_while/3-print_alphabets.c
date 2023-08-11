#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lo = 'a', up = 'A';

	while (up <= 'Z')
	{
		if (lo == 'z')
		{
			putchar(up);
			up++;
		}
		else
		{
			putchar(lo);
			lo++;
		}
	}
	putchar('\n');
	return (0);
}
