#include <stdio.h>
/**
 * main - main mdescription
 *
 * Return: always (0)
 */
int main(void)
{
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			putchar(i + '0');
			if (j != 9)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
