#include "main.h"
/**
 * main - prints the string "engineer".
 * Return: 0 on success.
 */
int main(void)
{
	char c[] = "engineers";
	int z;

	while (z < 9)
	{
		_putchar(c[z]);
		z++;
	}
	_putchar('\n');
	return (0);
}
