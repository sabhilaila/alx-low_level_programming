#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 * Description: This function prints the strings passed as parameters, with the specified separator between them. If a separator is not provided, it will print the strings without any separation. If a string is NULL, it will print "(nil)" instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
	{
	unsigned int i;

	char *str;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
	str = va_arg(list, char *);

	if (!str)
	str = "nil";


	if (!separator)
	printf("%s", str);
	else if (separator && i == 0)
	printf("%s", str);
	else
	printf("%s%s", separator, str);
	}
	printf("\n");
	va_end(list);
}

