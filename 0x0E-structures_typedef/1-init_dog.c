#include "dog.h"
#include <stdlib.h>
/**
 * intit_dog - intialize variable type struct dog
 * @d: dog to be intialized
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void intit_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
