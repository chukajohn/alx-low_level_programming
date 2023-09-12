#include "dog.h"
#include <stdio.h>

/**
 * _strlen - returns the lenght of a string
 * @s: string to  be evaluted
 * 
 *Return: the lenght of the string
 */

int _strlen(char *s)
{
	int i = 0;
	
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}


/**
 * _strcpy - copies the string to  src
 * @dest: destination of the copied string
 * @src: string to be copied
 *Return: the pointerto dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

}

/**
 * new_dog - a function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 *  @owner: dog owner
 *  Return: a pointrer to the dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog ==NULL)
		RETURN (NULL);

	dog->name = malloc (sizeof(char) * (len1 + 1));
	if (dog->name ==NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
}
