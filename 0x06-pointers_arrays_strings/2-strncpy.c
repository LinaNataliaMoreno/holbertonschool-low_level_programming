#include "holberton.h"
/**
 * _strncpy - it copies a string
 * function should work exactly like strncpy
 * @dest: the destination
 * @src: the source
 * @n: number of characters that will be copy
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	for (; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
