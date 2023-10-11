#include "dog.h"
#include <stdlib.h>

char *_strdup(const char *str);
unsigned int _strlen(const char *str);

/**
 * init_dog - Dog Struct
 * @new_dog: Pointer
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog Owner
 */
void init_dog(struct dog *new_dog, char *name, float age, char *owner)
{
	if (new_dog == NULL)
		new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return;

	new_dog->name = _strdup(name);

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return;
	}

	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return;
	}

	new_dog->age = age;
}

/**
 * _strdup - Duplicates a string.
 * @str: String to duplicate
 * Return: A pointer
 */
char *_strdup(const char *str)
{
	char *dup_str;
	int i = 0;

	if (str == NULL)
		return (NULL);

	dup_str = (char *) malloc(sizeof(char) * (_strlen(str) + 1));

	if (dup_str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		dup_str[i] = str[i];
		i++;
	}
	dup_str[i] = '\0';

	return (dup_str);
}

/**
 * _strlen - get the length of a string
 * @str: String
 * Return: The length of string @s
 */
unsigned int _strlen(const char *str)
{
	unsigned int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}
