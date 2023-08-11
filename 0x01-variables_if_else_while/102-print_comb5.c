#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = '0', i = '0', j, k;

	while (n <= '9')
	{
		while (i <= '8')
		{
			j = '0';
			while (j <= '9')
			{
				k = '0';
				while (k <= '9')
				{
					putchar(n);
					putchar(i);
					putchar(' ');
					putchar(j);
					putchar(k);
					if (n <= '9' && i <= '7')
					{
					putchar(',');
					putchar(' ');
					}
					k++;
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
