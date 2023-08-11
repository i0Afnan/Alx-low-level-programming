#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lo = 'a', up = 'A';

	for (; up <= 'Z';)
	{
		for (; lo <= 'z'; lo++)
		{
			putchar(lo);
		}
		while (lo == 'z' && up <= 'Z')
		{
			putchar(up);
			up++;
		}
	}

	putchar('\n');
	return (0);
}
