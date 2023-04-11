#include <stdlib.h>

/**
 * wordcounter - get word count from string
 *             without spaces
 *
 * @str: string to count words present
 *
 * Return: The number of words
*/

int wordcounter(char *str)
{
	int words = 0;

	while (*str != '\0')
	{
		/*skip spaces*/
		if (*str == ' ')
			str++;
		else
		{
			/*count words*/
			while (*str != ' ' && *str != '\0')
				str++;
			words++;
		}
	}
	return (words);
}

/**
 * free_array - free arr[a]
 *
 * @ar: array to free
 * @a: array[a]
 *
 * Return: nothing
*/

void free_array(char **ar, int a)
{
	if (ar != NULL && a != 0)
	{
		while (a >= 0)
		{
			free(ar[a]);
			a--;
		}
		free(ar);
	}
}

/**
 * strtow - split a string to words
 *
 * @str: string to split.
 *
 * Return: NULL if it fails
*/

char **strtow(char *str)
{
	int a, s, j, str_l, word;
	char **string;

	if (str == NULL || *str == '\0')
		return (NULL);

	str_l = wordcounter(str);
	/*return null if str_l == 0 || new == NULL*/
	string = malloc((str_l + 1) * sizeof(char *));
	if (str_l == 0 || string == NULL)
		return (NULL);

	for (a = s = 0; a < str_l; a++)
	{
		for (word = s; str[word] != '\0'; word++)
		{
			if (str[word] == ' ')
				s++;

			if (str[word] != ' ' && (str[word + 1] == ' ' || str[word + 1] == '\0'))
			{
				string[a] = malloc((word - s + 2) * sizeof(char));
				if (string[a] == NULL)
				{
					free_array(string, a);
					return (NULL);
				}
				break;
			}
		}

		for (j = 0; s <= word; s++, j++)
			string[a][j] = str[s];
		string[a][j] = '\0';
	}
	string[a] = NULL;
	return (string);
}
