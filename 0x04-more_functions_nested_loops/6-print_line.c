#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_line(int n)
{
int line;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 1; line <= n; line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
