#include <stdio.h>
/**
* main - función principal
* Return : 0
*/
int main(void)
{
	int a = 48;
	int b = 97;

	while (a <= 57)
	{
		putchar (a);
		a = a + 1;
	}
	while (b <= 102)
	{
		putchar (b);
		b = b + 1;
	}
	putchar('\n');
	return (0);
}
