/**
*main - display all possible combinations of three digits
*Return: 0
*/

int main(void)
{
	int i;
	int j = 0;
	int k = 0;

	for (i = 0; i <= 9; i++)
	{
		j = i + 1;
		for (; j <= 9; j++)
		{
			k = j + 1;
			for (; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (!(i == 7 && j == 8 && k == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
