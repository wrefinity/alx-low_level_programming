#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * func_one - get the 2 char of keygen
 * @a: size of user
 * @b: array of arguments
 * Return: the position of posvalues
 */
int func_one(int a, char *b[])
{
	int count = 0, car = 0, value;

	for (; count < a; count++)
		car = car + b[1][count];
	value = (car ^ 79) & 63;
	return (value);
}
/**
 * func_two - get the thirdth char of keygen
 * @a: size of user
 * @b: array of arguments
 * Return: the position of posvalues
 */
int func_two(int a, char *b[])
{
	int count = 0, car = 1, value;

	for (; count < a; count++)
		car = b[1][count] * car;
	value = (car ^ 85) & 63;
	return (value);
}
/**
 * func_three - get the 4th char of keygen
 * @b: array of arguments
 * Return: the position of posvalues
 */
int func_three(char *b[])
{
	int value, car = 0, count = 0;

	for (; b[1][count]; count++)
	{
		if (car < b[1][count])
			car = b[1][count];
	}
	srand(car ^ 14);
	value = rand() & 63;
	return (value);
}
/**
 * func_four - get the 4th char of keygen
 * @b: size of user
 * Return: the position of posvalues
 */
int func_four(char *b[])
{
	int value, car = 0, count = 0;

	for (; b[1][count]; count++)
		car = car + (b[1][count] * b[1][count]);
	value = (car ^ 239) & 63;
	return (value);
}
/**
 * main - keygenerator for crackme 5
 * @argc: number of arguments in the input
 * @argv: array that store the argumens
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	char crack_code[] =
		"A-CHRDw87lNS0E9B2TibgpnMVys5Xzvt0GJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char key[7];
	int i = 0, car = 0, value;

	if (argc > 1)
	{
		while (argv[1][i])
		{
			i++;
		}
		key[0] = crack_code[(i ^ 59) & 63];
		key[1] = crack_code[func_one(i, argv)];
		key[2] = crack_code[func_two(i, argv)];
		key[3] = crack_code[func_three(argv)];
		key[4] = crack_code[func_four(argv)];
		for (; car < argv[1][0]; car++)
		{
			value = rand();
		}
		value = (value ^ 229) & 63;
		key[5] = crack_code[value];
		for (i = 0; i < 6; i++)
			printf("%c", key[i]);
	}
	return (0);
}
