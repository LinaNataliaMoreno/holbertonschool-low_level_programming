#include <stdio.h>

/**
 * main - to find the prime factors of a number.
 *
 * Return: the largest prime factor of the number.
 */
int main(void)
{
	int long number;
	int primefactor, keeptheprime;

	number = 612852475143;
	keeptheprime = 0;
	primefactor = 2;

	while (primefactor <= number)
	{
		if (number % primefactor == 0)
		{
			if (primefactor > keeptheprime)
			{
				keeptheprime = primefactor;
			}
			number = number / primefactor;
		}
		primefactor++;
	}
	printf("%d\n", keeptheprime);
}
