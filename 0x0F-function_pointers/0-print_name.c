#include "function_pointers.h"
/**
 * print_name - entry point
 * @name: name to print
 * @f: pointer to a function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
