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
	char *nombre = "", *dueno = "";
	dog_t *dog;

	if (name != NULL)
		nombre = name;
	if (owner != NULL)
		dueno = owner;
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = nombre;
	dog->age = age;
	dog->owner = dueno;
	return (dog);
}
