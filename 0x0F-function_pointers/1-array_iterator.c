#include "function_pointers.h"

/**
 * array_iterator - aray iterator function.
 * @array: array pointer.
 * @size: defines the size of array.
 * @action: function poiter to be executed.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
