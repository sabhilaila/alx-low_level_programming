#include "main.h"
/**
 * print_square - prints n squares according n numbers of times
 * @size: the number of square s/number of times
 * Return: void
 */

void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (x = 0; x < size; x++)
	{
	for (y = 0; y < size; y++)
	{
	putchar(35);
	}
	putchar('\n');
	}
	}
}

