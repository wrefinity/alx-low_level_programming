#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char lettt;

	for (lettt = 'a'; lettt <= 'z'; lettt++)
	{
		if (lettt != 'e' && lettt != 'q')
			putchar(lettt);
	}

	putchar('\n');

	return (0);
}
