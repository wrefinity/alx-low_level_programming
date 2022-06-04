#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int x;
	char leta;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');

	for (leta = 'a'; leta <= 'f'; leta++)
		putchar(leta);

	putchar('\n');

	return (0);
}
