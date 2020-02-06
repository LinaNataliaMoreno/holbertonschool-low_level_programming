#include <stdio.h>
/**
* main - entry point
* no comments
* Return: Always 0 (success)
*/
int main(void)
{
	int number;

	number = '0';
	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}
