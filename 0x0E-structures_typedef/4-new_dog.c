#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *new_dog - creates a new dog
 *@name: char pointer argument
 *@age: float argument
 *@owner: char pointer argument
 *Return: dog_t pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL)
		name = "";
	if (owner == NULL)
		owner = "";
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
