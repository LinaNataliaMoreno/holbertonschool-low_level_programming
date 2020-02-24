#include "holberton.h"
#include <stdio.h>

/**
* _memset - fills the first n bytes of the memory area
* @s: points to the area
* @b: holds the constant byte
* @n: to determine the amount of byte
* Return: a char
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		*(s + c) = b;
	}
	return (s);
}
