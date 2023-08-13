#include <stdio.h>
/**
 * main - main mdescription
 *
 * Return: always (0)
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		for (d = '0'; d <= '9'; d++)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(d);
	}
	putchar('\n');
	return (0);
}
