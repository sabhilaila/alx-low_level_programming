#include <time.h>

#include <stdio.h>

/**
 * main - prints a text accoriding number
 * Return: always (Success)
 *
 */

int main(void)

{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	{
		putchar(low);
	}
		putchar('\n');

	return (0);
}
