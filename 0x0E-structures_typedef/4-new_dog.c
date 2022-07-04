#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * getStrLen - getstring length.
 * @str: string character.
 *
 * Return:length of the string.
 */
int getStrLen(char *str)
{
	int l = 0;

	while (*str++)
		l++;

	return (l);
}

/**
 * _strcopy - copy some string.
 * @dest: destination string copy.
 * @src: source string.
 *
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int x = 0;

	for (x = 0; src[x]; x++)
		dest[x] = src[x];

	dest[x] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: The new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogy;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);

	dogy = malloc(sizeof(dog_t));
	if (dogy == NULL)
		return (NULL);

	dogy->name = malloc(sizeof(char) * (getStrLen(name) + 1));
	if (dogy->name == NULL)
	{
		free(dogy);
		return (NULL);
	}

	dogy->owner = malloc(sizeof(char) * (getStrLen(owner) + 1));
	if (dogy->owner == NULL)
	{
		free(dogy->name);
		free(dogy);
		return (NULL);
	}

	dogy->age = age;
	dogy->name = _strcopy(dogy->name, name);
	dogy->owner = _strcopy(dogy->owner, owner);

	return (dogy);
}

