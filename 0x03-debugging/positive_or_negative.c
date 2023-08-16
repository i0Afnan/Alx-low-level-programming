#include "main.h"

/**
 * positive_or_negative - Test a number for negative or positive
 *
 * @i: the number to be tested
 *
 * Return: positive or negative
 */
void positive_or_negative(int i)
{
	printf("%d ", i);
	if (i > 0)
	{
		printf("is positive\n");
	}
	else if (i == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}
}
