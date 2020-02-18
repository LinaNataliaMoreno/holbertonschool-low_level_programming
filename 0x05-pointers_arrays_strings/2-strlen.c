#include "holberton.h"

/**
* _strlen - a function that returns the length of a string
* The standard library provides a similar function: strlen. Run man strlen
* @s : represents the string
* Return: integer
*/

int _strlen(char *s)
{
	char keep;
	int  count = 0;

	keep = s[0];
	while (keep != '\0')
	{
	count++;
	keep = s[count];
	}
	return (count);
	}
