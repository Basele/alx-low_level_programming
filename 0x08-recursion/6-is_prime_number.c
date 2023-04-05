#include "main.h"

int actual_prime(int m, int i);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @m: number to evaluate
 *
 * Return: 1 if m is a prime number, 0 if not
 */
int is_prime_number(int m)
{
	if (m <= 1)
		return (0);
	return (actual_prime(m, m - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @m: number to evaluate
 * @i: iterator
 *
 * Return: 1 if m is prime, 0 if not
 */
int actual_prime(int m, int i)
{
	if (i == 1)
		return (1);
	if (m % i == 0 && i > 0)
		return (0);
	return (actual_prime(m, i - 1));
}
