#include <stdio.h>

/**
* main - print the alphabet in lowercase
* putchar - writes a character to the standard output
* Return: 0
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar (letter);
	putchar('\n');
	return (0);
}
