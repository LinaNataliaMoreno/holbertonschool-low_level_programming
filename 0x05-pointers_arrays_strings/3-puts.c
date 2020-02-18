#include "holberton.h"

/**
*_puts - prints a string, followed by a new line, to stdout.
* The standard library provides a similar function: puts. Run man puts
* @str: keep an string
* Return: the string
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
