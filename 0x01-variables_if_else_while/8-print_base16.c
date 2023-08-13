#include <stdio.h>
/**
 * main - m these is
 *
 * Return always (0)
 *
 */
int main(void)
{
	char n;
	char t;

	for (n = '0'; n <= 9; n++)
	{
		putchar(n);
	}
	for (t = 'a'; t <= 'f'; t++)
	{
		putchar(t);
	}
	putchar('\n');
	return (0);
}
