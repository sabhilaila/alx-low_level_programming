#include "main.h"

/**
 * print_numbers - print nembers from 0 to 9
 * return: the number strating by 0 and ending by 9
 */

int print_number(void)
{
	int x;
	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}
		_putchar('\n');
}
