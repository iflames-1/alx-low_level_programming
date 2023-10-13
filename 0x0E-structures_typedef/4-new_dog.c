#include "dog.h"

/**
 *new_dog - create data for new dog
 *@name: name of dog
 *@age: dog age
 *@owner: owner name
 *Return: pointer to struct of new data
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = strdup(name);
	dog->owner = strdup(owner);

	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	dog->age = age;

	return (dog);
}
