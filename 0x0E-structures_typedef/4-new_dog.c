#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - a function that returns the length of a string
 * @s: string to evaluate
 *
 * Return: always the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}


/**
 * *_strcpy - copies the strings pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: Pointeur - pointer to the buffer in which we copy the string
 * @src: Pointeur - a string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int lenght, i;

	lenght = 0;

	while (src[lenght] != '\0')
	{
		lenght++;
	}

	for (i = 0; i < lenght; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';	/* '\0'null character, at the end of string kind of ecspace*/

	return (dest);
}


/**
 * new_dog - a function thaat creates a new dog
 * @name: variable 1 - a pointer
 * @age: variable 2
 * @owner: variable 3 - a pointer
 * store a copir of name and owner
 * Return: pointer to the new dog (Success), NULL (fail)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;             /* variable de type dog_t - pointeur */
	int lenght1, lenght2;      /* longeur des deux chaines de char owner & name */

	lenght1 = _strlen(name);
	lenght2 = _strlen(owner);

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	(*my_dog).name = malloc(sizeof(char) * (lenght1 + 1));
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	(*my_dog).owner = malloc(sizeof(char) * (lenght2 + 1));
	if (my_dog->owner == NULL)
	{
		free(my_dog);
		free(my_dog->name);
		return (NULL);
	}
	_strcpy((*my_dog).name, name);
	_strcpy((*my_dog).owner, owner);
	(*my_dog).age = age;

	return (my_dog);
}
