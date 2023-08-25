#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int q;
	int w;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (q = 0; s[q] != '\0'; q++)
	{
		for (w = 0; w < 52; w++)
		{
			if (s[q] == data1[w])
			{
				s[q] = datarot[w];
				break;
			}
		}
	}
	return (s);
}

