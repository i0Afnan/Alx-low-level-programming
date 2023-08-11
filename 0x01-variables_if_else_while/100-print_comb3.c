#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = '0', i = '0';

	while (n < '9')
	{
		i = n + 1;
		while (i <= '9')
		{
			putchar(n);
			putchar(i);
			if (n < '8')
			{
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
