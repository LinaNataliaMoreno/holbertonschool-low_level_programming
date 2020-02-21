#include "holberton.h"
/**
* print_rev - prints a string in reverse
* @s : it contains the string
* i = longitud del string
* Return: 0
*/

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
