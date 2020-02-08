#include <stdio.h>

/**
 * main - while
 * putchar - prints all the numbers between 00 to 99
 * Return: 0
 */
int main(void)
{
	int i, m;

	for (i = 0; i <= 9; i++)
	{
		for (m = 0; m <= 9; m++)
		{
			putchar(i + '0');
			putchar(m + '0');
			if (!(i == 9 && m == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
putchar('\n');
}

