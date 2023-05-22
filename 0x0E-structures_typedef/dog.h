#include <stdlib.h>
#include "dog.h"
/**
 * initi_dog - a function to initialize a struct type named dog
 * @dg: pointer to struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
void initi_dog(struct dog *dg, char *name, float age, char *owner)
{
	if (dg == NULL)
		dg = malloc(sizeof(struct dog));
	dg->name = name;
	dg->age = age;
	dg->owner = owner;
}
