#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int i = 0;
	int cont = 0;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (cont = 0; cont < size; cont++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
