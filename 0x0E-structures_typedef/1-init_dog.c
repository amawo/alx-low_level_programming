#include <stdlib.h>
#include "dog.h"

/*
 * init_dog - a function that initialize the struct dog
 * @d: a pointer
 * @name: element one
 * @age: element two
 * @owner: element tree
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
