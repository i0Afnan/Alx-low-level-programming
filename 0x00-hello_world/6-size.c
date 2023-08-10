#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n",sizeof(char));
	printf("Size of an int: %lu byte(s)\n",sizeof(int)"\n"); 
	printf("Size of a long int: %lu byte(s)\n",sizeof(long int)"\n"); 
	printf("Size of a long long: %lu byte(s)\n",sizeof(long long)"\n"); 
	printf("Size of a float: %lu byte(s)\n",sizeof(float)"\n"); 
	return (0);
}
