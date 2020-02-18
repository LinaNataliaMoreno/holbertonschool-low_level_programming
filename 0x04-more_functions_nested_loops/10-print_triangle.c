#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i = 0;
	int cont = 0;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (cont = size ; cont >= 1; cont--)
			{
				if (i < cont)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}


}
