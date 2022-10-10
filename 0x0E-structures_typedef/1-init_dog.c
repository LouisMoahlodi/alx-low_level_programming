#include "dog.h"

/**
 * init_dog - Initializes to the data type "struct dog"
 *
 * @d: pointer to data type
 * @name: pointer to dog name storage
 * @age: An float for dog age
 * @owner: an pointer character to dog owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
