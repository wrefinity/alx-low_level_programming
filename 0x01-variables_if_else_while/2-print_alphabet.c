#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char lettt;

	for (lettt = 'a'; lettt <= 'z'; lettt++)
		putchar(lettt);

	putchar('\n');

	return (0);
}
