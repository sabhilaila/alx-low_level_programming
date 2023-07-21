#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - entry point
 * @a: input
 * @b: input
 * Return: the sum of a and b
 */


int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - entry point
 * @a: input
 * @b: input
 * Return: the sub of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - entry point
 * @a: input
 * @b: input
 * Return: the mul of a and b
 */


int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - entry point
 * @a: input
 * @b: input
 * Return: the div of a and b
 */


int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("error\n");
		exit(100);
	}
	return (a / b);
}
