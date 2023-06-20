#include "dog.h"

/**
 * _strdup - Function makes a copy string
 * @s: The struct
 * Return: To NULL or new
 * @BySalma.as
 */

char *_strdup(char *s)
{
	int i = 0;
	char *new;

	if (!s)
		return (NULL);
	while (s[i])
		i++;
	new = malloc(sizeof(char) * (i + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}




/**
 * new_dog - The new dog type function
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's onwer
 * Return: To NULL or new
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = (dog_t *)malloc(sizeof(dog_t));
	if (!new)
		return (NULL);
	new->name = _strdup(name);
	if (!new->name)
	{
		free(new);
		return (NULL);
	}
	new->age = age;
	new->owner = _strdup(owner);
	if (!new->owner)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	return (new);
}
