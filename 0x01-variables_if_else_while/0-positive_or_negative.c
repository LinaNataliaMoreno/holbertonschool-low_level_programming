#include <stdio.h> /*libreria de printf */
#include <stdlib.h>
#include <time.h>

/**
* main -  Ramdom number, last digit <5, >5, =0.
* srand - Pseudo-random number generator with seed
* rand - Generate random numbers
* printf - Print a messege
* Return: 0
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
