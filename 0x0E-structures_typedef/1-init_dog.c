#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initialize a variable of type struct dog`
 * @d: struct dog parameter
 * @name: string for name parapetetr
 * @age: integer for age parameter
 * @owner: string for owners parameter
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
