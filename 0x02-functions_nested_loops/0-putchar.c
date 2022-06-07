#include "main.h"
/**
 * main - prints the string "_putchar".
 * Return: 0 on success.
 */
int main(void)
{
	char c[] = "_putchar";
	int z;

	for (z = 0; z < 8; z++)
	{
		_putchar(c[z]);
	}
	_putchar('\n');
	return (0);
}
