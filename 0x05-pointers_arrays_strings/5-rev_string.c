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
	char temp;
	
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (j < i - 1)
	{
		temp = s[i - 1];
		s[i - 1] = s[j];
		s[j] = temp;

		j++;
		i--;
	}
}
