#include "main.h"

/**
 * print_numbers - print nembers since 0 up to 9
 * return: the numbers since 0 up to 9
 */

int print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}
		_putchar('\n');
}
