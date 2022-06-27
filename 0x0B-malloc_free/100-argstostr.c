#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments.
 * @ac: The number of arguments passed to the program.
 * @av: An array of pointers to the arguments.
 *
 * Return: Null or a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	int j, i, arg, size = ac;
	char *concatenated;

	if (ac == 0 || av == NULL)
		return (NULL);
		
	for (j = 0; j < ac; j++)
	{
		for (arg = 0; av[j][arg]; arg++)
			size++;
	}

	concatenated = malloc(sizeof(char) * size + 1);

	if (concatenated == NULL)
		return (NULL);

	i = 0;

	for (j = 0; j < ac; j++)
	{
		for (arg = 0; av[j][arg]; arg++)
			concatenated[i++] = av[j][arg];

		concatenated[i++] = '\n';
	}

	concatenated[size] = '\0';

	return (concatenated);
}
