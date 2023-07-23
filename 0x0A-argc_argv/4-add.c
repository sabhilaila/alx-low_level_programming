#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * add_numbers - adds positive numbers from command-line arguments
 * @argv: input arguments
 * Return: sum of positive numbers
 */
int add_numbers(char *argv[])
{
int sum = 0;
int i;

for (i = 1; argv[i]; i++)
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
exit(1);

}
}
if (ispositive)
{
	sum += num;
}
}

return (sum);
}

/**
 * main - entry point
 * @argc: input
 * @argv: input
 * Return: something
 */
int main(int argc, char *argv[])
{
	int sum = 0;

if (argc == 1)
{
	printf("0\n");
	return (0);
}

	sum = add_numbers(argv);
	printf("%d\n", sum);
	return (0);
}
