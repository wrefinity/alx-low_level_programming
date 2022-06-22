#include "main.h"

/**
 * checker_func - Finds the square root of two numbers
 *
 * @a: The number
 * @b: The number to test for the square root of @a
 *
 * Return: square root
 */

int checker_func(int a, int b)
{
	if (b * b > a)
		return (-1);

	else if (b * b == a)
		return (b);

	else
		return (checker_func(a, b + 1));

	return (1);
}

/**
 * _sqrt_recursion - defines the natural square root of a number
 *
 * @n: the number to return
 *
 * Return: the square root of the numner n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (checker_func(n, 1));
}
