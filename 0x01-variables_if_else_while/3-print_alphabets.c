#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char lowercase, uppercase;

	lowercase = 'a';
	uppercase = 'A';
	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 'Z')
	{
		putchar(lowercase);
		lowercase++;
	}
	putchar('\n');
	return (0);
}
