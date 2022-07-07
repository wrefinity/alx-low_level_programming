#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: the seperator for the numbers.
 * @n: number of variable passed to function.
 * @...: variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list elements;
	int printer = (n-1);

	va_start(elements, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(elements, int));

		if (i != printer && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(elements);
}
