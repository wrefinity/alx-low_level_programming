#include <stdlib.h>
/**
  * _calloc - allocates memory for an initialized buffer
  * @nmemb: defines the memory bytes
  * @size: defines the data type bits
  * Return: return pointer to the bytes
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb ; i++)
		ptr[i] = 0;
	return (ptr);
}
