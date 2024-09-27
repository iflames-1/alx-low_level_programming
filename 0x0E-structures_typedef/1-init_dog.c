#include "dog.h"
#include <stddef.h>

/**
 *init_dog - initializes dog struct
 *@d: pointer to dog struct
 *@name: name of dog
 *@age: dog age
 *@owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
