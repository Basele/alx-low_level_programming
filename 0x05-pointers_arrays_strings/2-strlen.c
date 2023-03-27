basele@basele:~/zero_day/alx-low_level_programming/0x05-pointers_arrays_strings$ cat 2-strlen.c
/**
 * _strlen - returns the length of a string
 *
 * @s: string parameter input
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; ++s)
		++counter;

	return (counter);
}
