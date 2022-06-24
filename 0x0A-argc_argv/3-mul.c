#include <stdio.h>
#include <stdlib.h>
/**
  * main - program that multiplies two numbers.
  *
  * @argc: defines the no of command line arguments
  * @argv: defines the argument array
  * Return: 0 on success;
  */
int main(int argc, char *argv[])
{
	int x, mul;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = 1;

		for (x = 1; x < 3; x++)
		mul *= atoi(argv[x]);

		printf("%d\n", mul);
	}

	return (0);
}
