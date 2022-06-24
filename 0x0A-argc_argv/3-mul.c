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
	if (argc <= 2)
		printf("Error\n");
		return (1);
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
