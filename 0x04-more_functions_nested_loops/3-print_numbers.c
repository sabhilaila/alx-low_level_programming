#include "main.h"

/**
 * print_numbers - print numbers since 0 up to 9
 * Return: void
 */
void print_numbers(void)

{

char c;

for (c = '0'; c <= '9'; c++)
{
putchar(c);
}
putchar('\n');
}
