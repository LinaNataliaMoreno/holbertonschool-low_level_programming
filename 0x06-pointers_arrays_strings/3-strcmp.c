#include "holberton.h"
#include <stdio.h>
/**
  * _strcmp - to compare 2 strings
  * @s1: string 1
  * @s2: string 2
  * Return: int
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
