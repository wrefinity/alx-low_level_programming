#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: defines the dog to be initialized.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->age = age;
		d->owner = owner;
		d->name = name;
	}
}
