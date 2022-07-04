#ifndef DOG_H
#define DOG_H

/*
 * File: dog.h
 * Desc: header file section.
 */

/**
 * struct dog - A new type describing a dog.
 * @name: defines the name of the dog.
 * @age: defines the age of the dog.
 * @owner: specifies the owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
