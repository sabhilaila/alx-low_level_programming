#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 * @n: the numbers of times to print diagonal lines
 * @x: the first point
 * @y: the second point
 * return: void
 */
void print_diagonal(int n)
{
	int x, y;
	
       	(n <= 0)
	{
	putchar('\n')
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	for (y = 0; y < x; y++)
	{
	putchar(32);
	}
	putchar(92);
	putchar('\n');
	}
	}
}
