#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int time, j;
	for(time = 0; time <= 10; time++)
	{
		for(j = 0; j <= 14; j++)
		{
			if (time >= 10)
			{
			_putchar((time / 10) + '0');
			}
		}
		time = 0;
		_putchar('\n');
	}
}
			
		
