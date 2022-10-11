#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - dog structure
 * @d: the struct
 * @name: dogs name
 * @age: dogs age
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
