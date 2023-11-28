#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *Return: new dog, else, null
 */

dog_t *new_dog(char *name, float age, char *owner)

{
	int name1, owner1, x;
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	for (name1 = 0; name[name1]; name1++)
		;
	name1++;
	d->name = malloc(name1 * sizeof(char));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	for (x = 0; x < name1; x++)
		d->name[x] = name[x];
	d->age = age;
	for (owner1 = 0; owner[owner1]; owner1++)
		;
	owner1++;
	d->owner = malloc(owner1 * sizeof(char));

	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return(NULL);
	}
	for (x = 0; x < owner1; x++)
		d->owner[x] = owner[x];
	return(d);
}


