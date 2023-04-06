#include "main.h"

/**
 * str_checker - check if two strings are identical.
 * @j1: string_1 base address.
 * @j2: string_2 base address.
 * @k: left index.
 * @l: special index. (joker)
 * Return: 1 if j is palindrome, 0 otherwise.
 */
int str_checker(char *j1, char *j2, int k, int l)
{
	if (j1[i] == '\0' && j2[j] == '\0')
		return (1);
	if (j1[k] == j2[l])
		return (str_checker(j1, j2, k + 1, l + 1));
	if (j1[k] == '\0' && j2[l] == '*')
		return (str_checker(j1, j2, k, l + 1));
	if (j2[k] == '*')
		return (str_checker(j1, j2, k + 1, l) || str_checker(j1, j2, k, l + 1));
	return (0);
}
/**
 * wildcmp - check if strings could be considered identical
 * @j1: base address for string.
 * @j2: base address for string.
 *
 * Return: 1 if are considered identical.
 */
int wildcmp(char *j1, char *j2)
{
	return (str_checker(j1, j2, 0, 0));
}
