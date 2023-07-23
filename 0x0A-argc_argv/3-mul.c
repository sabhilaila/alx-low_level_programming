#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - multiplate two numbers
 * @argc: first input
 * @argv: second input
 * Return: 0 otherwize 1
 */

int main(int argc, char *argv[])
{
	int x, y;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	result = x * y;

	printf("%d\n", result);

	return (0);
}
