#include "dog.h"

/**
 * init_dog - initializes structure of type dog
 * @d: pointer to structure
 * @name: pointer to name of the dog
 * @age: of dog age
 * @owner: pointer to dog owner
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
