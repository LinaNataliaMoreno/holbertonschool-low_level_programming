#include "holberton.h"
#include <stdio.h>
/**
* _strspn - gets the length of a prefix substring
* @s: C string to scann
* @accept: C string composed by matched characteres
* standard library: strspn
* Return: the number of bytes in the initial of s
* Return: that consists only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	int i;
	char *n;
		
	for (i = 0; *s; s++, i++)
	{
		for (n = accept; *n && *n != *s; n++)
		{
		}
		if (*n == '\0')
			break;
	}
	return (i);
}
