#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function to return a 2-dimensional array pointer
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: 2 dimensional array or null.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	i = j = 0;
	if (height < 1)
		return (NULL);
	p = (int **)malloc(height * sizeof(p));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
