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
	int lastd;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		lastd = n % 10;
				if (lastd > 5)
				{
				printf("Last digit of %d is %d  and is greater than 5", n, lastd);
				}
				else if (lastd == 0)
				{
				printf("Last digit of %d is %d  and is zero", n, lastd);
				}
				else
				{
				printf("Last digit of %d is %d  and is less than 6 and not zero", n, lastd);
				}
				return (0);
}
