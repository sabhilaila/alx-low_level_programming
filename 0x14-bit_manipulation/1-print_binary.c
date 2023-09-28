#include <stdio.h>
#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number
 * @n: input
 * Return: 0 for success
 */
void print_binary(unsigned long int n)
{
	int i;
	int flag = 0;

	for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
	{
		unsigned long int mask = 1UL << i;

		if (n & mask)
		{
			putchar('1');
			flag = 1;
		}
		else
		{
			if (flag == 1 || i == 0)
			{
				putchar('0');
			}
		}
	}
	if (flag == 0)
	{
		putchar('0');
	}
}
