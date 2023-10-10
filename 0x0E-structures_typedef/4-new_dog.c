#include <stdlib.h>
#include "dog.h"

/**
  * _strlen - returns the length of a string
  * @s: the string
  * Return: returns the lenght
  */

int _strlen(char *s)
{
	int n, i;

	i = 0;
	for (n = 0; s[n] != '\0'; n++)
	i++;
	return (i);
}

/**
  * *_strcpy - copy the string pointed to by src
  * including the terminating null byte (\0)
  * to the buffer pointed to by dest
  * @dest: pointer to the buffer in which we copy the string
  * @src: string to be copied
  * Return: the pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int l, i;

	l = 0;

	while (src[l] != '\0')
	{
		l++;
	}

	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
  * new_dog - create a new dog
  * @name: name of the dog
  * @age: age of the dog
  * @owner: owner of the dog
  * Return: pointer || NULL otherwise
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (l1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (l2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
