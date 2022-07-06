#include "function_pointers.h"

/**
 * print_name - defines the print name function.
 * @name: variable name to print.
 * @f: the function point to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
