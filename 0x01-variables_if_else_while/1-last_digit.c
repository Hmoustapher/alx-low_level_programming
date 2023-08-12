#include	<stdio.h>
#include	<stdlib.h>
#include	<time.h>
/**
 * main - Entry point
 *
 * Description: Generates a random number and prints its sign.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	
		srand(time(0));
		n = rand() - RAND_MAX / 2;
		
				if (n > 5)
				{
				printf("%d is greater than 5", n);
				}
				else if (n == 0)
				{
				printf("%d is zero", n);
				}
				else
				{
				printf("%d and is less than 6 and not 0",  n);
				}
				return (0);
}
