#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: input
 * @argv: input
 * Return: always zero
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
