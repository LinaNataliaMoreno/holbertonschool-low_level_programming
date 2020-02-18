#include "holberton.h"
#include <stdio.h>

/**
* print_array - to print the n elements of aa array of integer
* @a : defined by the exercise
* @n : number of elements of the array to be printed
* Return: Always 0.
*/

void print_array(int *a, int n)
{

	int i;
	i = 0;

	if (n > 0)
	{
		while (a[i] != '\0')
		{
			printf("%d", a[i];
			if (i == n - 1);
				break;
			printf(", ");
			i++
		}
	}
	printf('\n');
}


