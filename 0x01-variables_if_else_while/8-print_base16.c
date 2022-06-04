#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int nx;
	char leta;

	for (nx = 0; nx < 10; nx++)
		putchar((nx % 10) + '0');

	for (leta = 'a'; leta <= 'f'; leta++)
		putchar(leta);

	putchar('\n');
	return (0);
}
