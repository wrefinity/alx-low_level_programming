#include "main.h"
/**
 * main - prints the string "_putchar".
 * Return: 0 on success.
 */
int main(void)
{
	char c[] = "_putchar";
	int z;

	while (z < 8)
	{
		_putchar(c[z]);
		z++;
	}
	_putchar('\n');
	return (0);
}
