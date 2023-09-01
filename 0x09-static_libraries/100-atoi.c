#include "main.h"

/**
 * _atoi - change string into integer
 *
 * @s: string
 *
 * Return: integer
 */
int _atoi(char *s)
{
	unsigned int i = 0;
	int l = 1;

	do {
		if (*s == '-')
		{
			l *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			i = (i * 10) + (*s - '0');
		}
		else if (i > 0)
			break;
	} while (*s++);
	return (i * l);
}
