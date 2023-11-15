#include "dog.h"
#include <stdio.h>
/**
 * init_dog - function
 * @d: struct dog ptr
 * @name: char ptr
 * @age: float
 * @owner: char ptr
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
