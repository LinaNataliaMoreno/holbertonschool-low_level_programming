#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  Ramdom number, last digit <5, >5, =0.
 * <studio.h> libreria para printf
 * srand - Pseudo-random number generator with seed
 * rand - Generate random numbers
 * printf - Print a messege - Library : <studio.h>
 * Return: 0
 */
int main(void)
{
	int n, lastpart;
        
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastpart = n % 10
	if (lastpart > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastpart);
	}
	else if (lastpart == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastpart);
	}
	else if (lastpart < 6 && != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastpart);
	}
	return (0);
}
