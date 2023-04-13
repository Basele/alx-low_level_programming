#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of @s2 to add to @s1 to be a new string
 *
 * Return: new string followed by the first @n bytes
 *         of string 2 @s2 or NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a1, a2, m, j;
	char *str;

	/*treat NULL as empty string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a1 = a2 = 0;
	/*length of both s1 & s2 respectively*/
	while (s1[a1] != '\0')
		a1++;
	while (s2[a2] != '\0')
		a2++;

	/*set n to length of s2*/
	if (n >= a2)
		n = a2;

	str = (char *) malloc((a1 + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	/*add s1 to str*/
	for (m = 0; s1[m] != '\0'; m++)
		str[m] = s1[m];
	/*add s2 n bytes to str*/
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		str[m] = s2[j];
		m++;
	}
	str[m] = '\0';
	return (str);
}
