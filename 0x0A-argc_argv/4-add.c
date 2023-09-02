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
int main(int argc, char *argv[])
{
	int result = 0;
	char *i;

	while (--argc)
	{
		i = argv[argc];
		while (*i)
		{
			if (*i < '0' || *i > '9')
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		result += atoi(argv[argc]);
	}
	printf("%d\n", result);
	return (0);
}
