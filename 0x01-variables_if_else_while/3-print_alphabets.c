#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char lowerbet;
	char alphabet;

		for (lowerbet = 'a'; lowerbet <= 'z'; lowerbet++)
		{
			putchar(lowerbet);
		}
		for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
		{
			putchar(alphabet);
		}
		putchar('\n');
		return (0);
}
