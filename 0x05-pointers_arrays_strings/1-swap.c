#include "holberton.h"

/**
* swap_int - swaps the values of two integers, void swap_int(int *a, int *b).
* @a: value number 1
* @b: value number 2
* Return: Always 0.
*/
void swap_int(int *a, int *b)
{	
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
