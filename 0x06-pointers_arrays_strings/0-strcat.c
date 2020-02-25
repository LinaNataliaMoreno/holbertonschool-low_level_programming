#include "holberton.h"
#include <stdio.h>
/**
 * *_strcat - concatenates two strings
 * src: source
 * dest: Returns a pointer to the resulting string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
