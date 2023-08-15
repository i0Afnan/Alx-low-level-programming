#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char put[] = "_putchar";

	for (int i = 0; i < 8; i++)
	{
		_putchar(put[i]);
		_putchar('\n);
	}
	return (0);
}
