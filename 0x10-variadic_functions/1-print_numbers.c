#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers followed by a new line
 * @n: number of parameter
 * @separator: separator between two numbers
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int index;

	
	va_start(ap, n);

	
	for (index = 0; index < n; index++)
	{
		
		printf("%d", va_arg(ap, int));
		
		if (separator && index != n - 1)
			printf("%s", separator);
	}
	
	va_end(ap);
	printf("\n");
}
