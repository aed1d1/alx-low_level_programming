#include "dog.h"

/**
 * new_dog - it creates a new dog
 * @name: points to the name of the dog
 * @age: is theage of the dog
 * @owner: points to the name of the owner
 * Return: a pointer of the new dog in the memory
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int a, b, c, d;
	dog_t *e;

	for (a = 0; name != NULL && name[a] != '\0'; a++)
	{}
	for  (b = 0; owner != NULL && owner[b] != '\0'; b++)
	{}
	e = malloc(sizeof(dog_t));
	if (e == NULL)
	{
		return (NULL);
	}
	e->name = malloc(sizeof(char) * a + 1);
	if (e->name == NULL)
	{
		free(e);
		return (NULL);
	}
	e->owner = malloc(sizeof(char) * b + 1);
	if (e->owner == NULL)
	{
		free(e->name);
		free(e);
		return (NULL);
	}
	for (c = 0; c < a; c++)
	{
		e->name[c] = name[c];
	}
	for (d = 0; d < b; d++)
	{
		e->owner[d] = owner[d];
	}
	e->name[a] = '\0';
	e->owner[b] = '\0';
	e->age = age;
	return (e);
}
