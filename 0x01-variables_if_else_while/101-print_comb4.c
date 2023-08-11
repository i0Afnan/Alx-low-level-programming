#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = '0', i = '0', j = '0';

	while (n <= '7')
	{
		i = n + 1;
		while (i <= '8')
		{
			j = i + 1;
			while (j <= '9')
			{
				putchar(n);
				putchar(i);
				putchar(j);
				if (n < '7')
				{
					putchar(',');
					putchar(' ');
				}
				j++;
			}
			i++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
