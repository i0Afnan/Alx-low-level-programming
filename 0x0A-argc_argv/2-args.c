#include "main.h"

/**
 * main - the start of the program
 *
 * @argc: counts the length of arguments
 * @argv: array that contains string
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int arg = 0;

	while (arg < argc)
	{
		printf("%s\n", argv[arg]);
		arg++;
	}
	return (0);
}
