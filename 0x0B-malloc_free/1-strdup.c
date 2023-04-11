#include <stdlib.h>

/**
 * *_strdup - a function that duplicates a string
 *
 * @str: input string to duplicate
 *
 * Return: NULL if str == NULL
 *         @str
*/

char *_strdup(char *str)
{
	int j = 0, i = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	/*calculate size of str*/
	while (str[i] != '\0')
		i++;

	s = malloc((i + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	while (str[j] != '\0')
	{
		s[j] = str[j];
		j++;
	}

	return (s);
}
