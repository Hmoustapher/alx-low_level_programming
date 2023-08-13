#include <stdio.h>
/**
 * main - main method
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			int i_1 = i / 10;
			int i_2 = i % 10;
			int j_1 = j / 10;
			int j_2 = j % 10;

			putchar(i_1 + '0');
			putchar(i_2 + '0');
			putchar(' ');
			putchar(j_1 + '0');
			putchar(j_2 + '0');
			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
