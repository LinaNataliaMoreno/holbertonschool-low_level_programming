#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - last digit of a random number, could be +, - or zero
* include <studio.h, libreria de printf
* srand - pseudo random number that is generated with seed
* print f: prints a message
* Return: 0
*/

int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	else if (last == 0)
	{
		printf("Last digit of %d is %d and is 0", n, last);
	}
	else if (last < 6 && last != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last);
	}
	return (0);
}
