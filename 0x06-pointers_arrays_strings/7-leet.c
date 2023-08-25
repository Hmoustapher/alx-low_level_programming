#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int d, f;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (d = 0; n[d] != '\0'; d++)
	{
		for (f = 0; f < 10; f++)
		{
			if (n[d] == s1[f])
			{
				n[d] = s2[f];
			}
		}
	}
	return (n);
}

