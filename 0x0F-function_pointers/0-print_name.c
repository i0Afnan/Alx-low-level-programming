#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 *
 * @name: name
 * @f: function to be called
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
