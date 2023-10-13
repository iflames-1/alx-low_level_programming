#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strlen - Returns the length of a string
 * @s: string to be counted
 * Return: lenth
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination
 * @src: source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

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
	int namelen = _strlen(name), ownerlen = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (namelen + 1));
	if (dog->name == NULL)
	{
		free(dog->name);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (ownerlen + 1));
	if (dog->owner == NULL)
	{
		free(dog->owner);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
