#include "main.h"

int actual_sqrt_recursion(int j, int k);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @j: the number to calculate the square root of
 *
 * Return: resulting square root
 */
int _sqrt_recursion(int j)
{
	if (j < 0)
		return (-1);
	return (actual_sqrt_recursion(j, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @j: number to calculate the sqaure root of
 * @k: iterator
 *
 * Return: resulting square root
 */
int actual_sqrt_recursion(int j, int k)
{
	if (k * k > j)
		return (-1);
	if (k * k == j)
		return (k);
	return (actual_sqrt_recursion(j, k + 1));
}
