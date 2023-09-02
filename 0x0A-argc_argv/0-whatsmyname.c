#include "main.h"

/**
 * main - the start point of the program
 *
 * @argc: length of arguments
 * @argv: array contains string
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		puts(argv[i]);
	return (0);
}
