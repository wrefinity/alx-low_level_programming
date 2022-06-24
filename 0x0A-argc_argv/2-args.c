#include <stdio.h>

/**
 * main - Prints all arguments passed to function
 * @argc: defines the number of command line arguments
 * @argv: defines the array name
 * Return: 0
 */


int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);
	return (0);
}
