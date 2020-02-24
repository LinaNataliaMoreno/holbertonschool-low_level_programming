#include "holberton.h"

/**
* _memcpy - copies n bytes from memory area src to memory area dest
* @dest: Pointer to the destination array where the content is to be copied
* @src: pointer to the data source (to copy)
* @n: number of bytes to copy.
* Return: a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
