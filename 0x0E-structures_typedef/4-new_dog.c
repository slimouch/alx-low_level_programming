#include <stdlib.h>
#include "dog.h"
/**
 * strln - gets the string length
 * @s: string
 * Return: length of s
 */
int strln(const char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
/**
 * strcp - copy a string
 * @source: source
 * @destin: destination
 * Return: destin
 */
char *strcp(char *destin, char *source)
{
	int i;

	for (i = 0; source[i]; i++)
		destin[i] = source[i];
	destin[i] = '\0';
	return (destin);
}
/**
 * new_dog - creates a new dog.
 * @name: dog new name
 * @age: dog new age
 * @owner: dog new owner
 * Return: struct pointer of dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (strln(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (strln(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = strcp(dog->name, name);
	dog->age = age;
	dog->owner = strcp(dog->owner, owner);
	return (dog);
}
