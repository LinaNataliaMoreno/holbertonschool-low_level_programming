#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  Ramdom number, last digit <5, >5, =0.
 * srand - Pseudo-random number generator with seed
 * rand - Generate random numbers
 * printf - Print a messege - Library : <studio.h>
 * Return: 0
 */
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
