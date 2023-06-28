#include <time.h>

#include <stdio.h>

/**
 * main - prints a text accoriding number
 * Return: always (Success)
 *
 */

int main(void)

{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
	putchar(d);
	if (d != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
