#include <stdlib.h>
#include <stdio.h>
/**
  * _isdigit - checks stings in digits
  * @argv: pointer to current item in argument
  * Return: return 0.
  */
int _checkDigit(char *argv)
{
	int i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] >= '0' && argv[i] <= '9')
			i++;
		else
			return (1);
	}
	return (0);
}
/**
  * _atoi - converts a string of ascii digits to the values they represent
  * @s: pointer to the source string
  * Return: value of digits
  */
int _atoi(char *s)
{
	int i, converted_res;

	i = converted_res = 0;
	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			converted_res *= 10;
			converted_res += (s[i] - '0');
		}
		i++;
	}
	return (converted_res);
}
/**
  * main - defines the main function
  * @argc: argument count
  * @argv: 2D array of arguments
  * Return: return 0 on success, 98 on failure
  */
int main(int argc, char *argv[])
{
	int i;

	malloc();
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		if (_checkDigit(argv[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (0);
}

