#include <stdio.h>
/**
 * main - main mdescription
 *
 * Return: always (0)
 */
int main(void)
{
	char d;

	for (d = '0'; d <= '9'; d++)
	{
		if (d <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		d++;
	}
	putchar('\n');
	return (0);
}
