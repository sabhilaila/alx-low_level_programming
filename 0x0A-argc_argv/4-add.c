#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main -entry point
 * @argc: input
 * @argv: input
 * Return: something
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		int num = 0;
		int j = 0;
		int ispositive = 1;

	if (arg[j] == '-')
	{
		ispositive = 0;
		j++;
	}

	while (arg[j] != '\0')
	{
		if (arg[j] >= '0' && arg[j] <= '9')
		{
			num = num * 10 + (arg[j] - '0');
			j++;
		}
		else
	{
		printf("Error\n");
		return (1);
	}
	}
	if (ispositive)
	{
		sum += num;
	}

	}
	printf("%d\n", sum);
	return (0);
}
