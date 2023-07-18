#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
	{
		i++;
	}
	return (i);
}
/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len1, len2;


	len1 = _strlen(name);
	len2 = _strlen(owner);


	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (0);

	new_dog->name = malloc(sizeof(char) * (len1 + 1));
	if (!new_dog->name)
	{
		free(new_dog);
		return (0);
	}
	new_dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (!new_dog->owner)
	{
		free(new_dog);
		return (0);
	}
	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}
