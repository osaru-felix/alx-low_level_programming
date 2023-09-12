#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;
	dog_t *new;

	if (name == NULL || owner == NULL)
		return (NULL);
	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	while (name[i])
	{
		i++;
	}
	while (owner[j])
	{
		j++;
	}
	new->name = malloc(sizeof(char) * (i + 1));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	new->age = age;
	new->owner = malloc(sizeof(char) * (j + 1));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
	{
		new->name[k] = name[k];
	}
	for (k = 0; k <= j; k++)
	{
		new->owner[k] = owner[k];
	}
	return (new);
}
