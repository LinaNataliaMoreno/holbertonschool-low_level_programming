#include "holberton.h"
/** 
* puts2 - prints every other character of a string, starting first character
* @str: it is the input that is a string
* Return: void
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		_putchar(str[i]);
	}
	_putchar('\n');
}
