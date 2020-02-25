#include "holberton.h"
#include <stdio.h>
/**
 * rot13 - encode a string using rot13
 * @c: the input, a string
 * Return: (c) char type
 */

char *rot13(char *c)
{
	char a_to_z[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n_to_m[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; a_to_z[j] != '\0'; j++)
		{
			if (c[i] == a_to_z[j])
			{
				c[i] = n_to_m[j];
				break;
			}
		}
	}

		return (c);
}
