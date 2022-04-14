#include "dog.h"
#include <string.h>

/**
 * scpy - copies string from s2 to s1
 * @s1: string to be copied to
 * @s2: string to be copied from
 * Return: copied string
 */
char *scpy(char *s1, char *s2)
{
	char *s = s1;

	while (*s2)
		*s1++ = *s2++;

	*s1 = 0;
	return (s);
}

/**
 * new_dog - create new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner
 * Return: dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));
	char *dog_name, *dog_owner;

	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog_name = (char *)malloc((strlen(name) + 1) * sizeof(char));
	if (dog_name == NULL)
	{
		/*free(dog_name);*/
		free(dog);
		return (NULL);
	}
	else
		dog->name = scpy(dog_name, name);

	dog_owner = (char *)malloc((strlen(owner) + 1) * sizeof(char));
	if (dog_owner == NULL)
	{
		/*free(dog_owner);*/
		free(dog_name);
		free(dog);
		return (NULL);
	}
	else
		dog->owner = scpy(dog_owner, owner);

	dog->age = age;

	return (dog);

	free(dog_owner);
	free(dog_name);
	free(dog);
}
