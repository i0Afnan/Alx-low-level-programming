#ifndef VAR_H
#define VAR_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct print - struct to print different data types
 *
 * @print: format to print
 * @f: function
 */
typedef struct print
{
	char *printl;
	void (*f)(va_list);
} print_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
