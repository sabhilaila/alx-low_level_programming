#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - calculte prime numbers
 * @n: our number
 * Return: integer value
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));

}
/**
 * check_prime - check if the number is prime
 * @n: the number to be checked
 * @i: the iretation times
 * Return: 1 for prime 0 for else
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);


	return (check_prime(n, i + 1));
}
