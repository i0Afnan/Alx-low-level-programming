#include "main.h"

/**
 * _isalpha - a funtion to detect lower/upper case alphabetic character.
 *
 * @c: The value of the input passed by the function.
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
