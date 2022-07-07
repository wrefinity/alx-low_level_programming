#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: defines the paramters passed to the function.
 * @...: defines a variable number of paramters.
 *
 * Return: the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list elements;

	va_start(elements, n);

	for (i = 0; i < n; i++)
		sum += va_arg(elements, int);

	va_end(elements);

	return (sum);
}
