#include <stdio.h>
#include <stdlib.h>

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
	if (argc == 2)
	{
		int change = 0, money = atoi(argv[1]), i = 0;
		int cents[] = {25, 10, 5, 2, 1};

		for (; i < 5; i++)
		{
			if (money >= cents[i])
			{
				change = change + (money / cents[i]);
				money = money % cents[i];

				if (money % cents[i] == 0)
					break;

			}
		}
		printf("%d\n", change);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
