#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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

		srand(time(0)); /* Initialize random number generator */
		n = rand() - RAND_MAX / 2; /* Generate random number */
/* Print the number along with its sign */
			printf("The number %d, followed by\n", n);
			if (n > 0)
{
			printf("is positive\n");
}
			else if (n == 0)
{
			 printf("is zero\n");
}
			else
{
			printf("is negative\n");
}
			return (0);
}
