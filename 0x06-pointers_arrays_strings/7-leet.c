#include "holberton.h"
#include <stdio.h>
/**
 * leet - a function that encodes a string into 1337
 * @c: the input = a sting
 * Return: c
 */

char *leet(char *c)
{
	char low[] = "aeotl";
	char upp[] = "AEOTL";
	char replace[] = "43071";
	int i, j;

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; low[j] != '\0'; j++)
		{
			if (c[i] == low[j] || c[i] == upp[j])
				c[i] = replace[j];
		}
	}

	return (c);
}
