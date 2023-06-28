#include <time.h>

#include <stdio.h>

/**
 * main - prints a text accoriding number
 * Return: always (Success)
 *
 */

int main(void);

{
	int d;
	char low;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	for (low = 'a'; low <= 'f'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}

