#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - the start of the program
 *
 * @argc: the length of arguments
 * @argv: array contains string
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (-1);
	}
	return (0);
}
