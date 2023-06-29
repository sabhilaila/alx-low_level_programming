#include "main.h"

/**
 * print_line - draws a staight line between two points
 * @n: the number o linezs to draw
 * Return: void
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	putchar(95);
	}
	putchar('\n');
	}
}
