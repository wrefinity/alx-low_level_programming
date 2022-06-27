#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function to Concatenates all arguments;
 * @ac: number of arguments passed to the program.
 * @av: defines an array of pointers to the arguments.
 *
 * Return: if ac == 0, av == NULL else new string pointer.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byte, i, arg_size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			arg_size++;
	}

	str = malloc(arg_sizeof(char) * arg_size + 1);

	if (str == NULL)
		return (NULL);

	i = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[i++] = av[arg][byte];

		str[i++] = '\n';
	}

	str[arg_size] = '\0';

	return (str);
}
