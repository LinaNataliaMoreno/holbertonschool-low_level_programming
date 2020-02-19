#include "holberton.h"

/**
* _strcpy - copies the string pointed to by src,
* the function will copy including the terminating null byte (\0),
* the function will copy to the buffer pointed to by dest.
* @src: it is the source
* @dest: it is the destination
* more comments
* Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i, tamano;

	i = 0;
	tamano = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	tamano = i;

	for (i = 0; i <= tamano; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
