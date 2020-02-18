#include "holberton.h"

/**
* puts_half - it prints half part of the string
* @str: it is the string
* Return: 0
*/

voif puts_half(char *str)
{
	int i, length, half

	i = 0;
	length = 0;
	half = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		half = length /2;
	}
	else
	{
		half = ((length - 1) / 2) + 1;
	}
	for (i = half; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

