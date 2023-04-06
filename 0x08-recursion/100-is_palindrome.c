#include "main.h"
/**
 * _strlen_recursion - Prints the length of a string.
 * @j: the string to be printed
 * Return: the length of string
 */
int _strlen_recursion(char *j)
{
	if (j[0] != '\0')
		return (1 + _strlen_recursion(j + 1));
	return (0);
}
/**
 * pal_checker - check if j is palindrome.
 * @k: string base address.
 * @i: left index.
 * @k: rigth index.
 * Return: 1 if j is palindrome, 0 otherwise.
 */
int pal_checker(char *j, int k, int l)
{
	if (j[k] == j[l])
		if (k > l / 2)
			return (1);
		else
			return (pal_checker(j, k + 1, l - 1));
	else
		return (0);
}
/**
 * is_palindrome - check if j is palindrome
 * @j: base address for string.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *j)
{
	return (pal_checker(j, 0, _strlen_recursion(j) - 1));
}
