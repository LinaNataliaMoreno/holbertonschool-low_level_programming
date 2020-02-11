#include "holberton.h"
/**
 * main: entry point
 * _putchar - writes the character c to stdout
 * char letter: character to print
 * on error, -1 is returned, and errno is set approriately
 * printf - print things with so many options
 * Return: on success 1.
 */
int main(void)
{
	int i;

	char letter[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};

	i = 0;
	while (i < 9)
	{
		_putchar(letter[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
