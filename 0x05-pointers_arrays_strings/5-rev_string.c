#include "holberton.h"
/**
* rev_string - reverses a string
* @s: it contains the string to be reversed
* Return: 0
*/

void rev_string(char *s)
{
	int i;
	int j;
	int k = 0;
	int var[10];

	while (s[i] != '\0')
	{
		var[i] = s[i];
		i++;
	}
	for (j = i; j >= 0; j--)
	{
		s[j] = var[k];
		k++;
	}
}
