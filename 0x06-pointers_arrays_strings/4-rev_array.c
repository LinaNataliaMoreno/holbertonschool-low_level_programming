#include "holberton.h"
/**
 * reverse_array - to reverse an array
 * @a: the array that will be reverse
 * @n: the size of @a
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int j;
	int *auxA;
	int *auxB;
	int c;

	auxA = a;
	auxB = a;

	for (j = 0; j < n - 1; j++)
	{
		auxB++;
	}
	for (j = 0; j < n / 2; j++)
	{
		c = *auxB;
		*auxA = *auxA;
		*auxB = c;
		auxA++;
		auxB--;
	}
}
