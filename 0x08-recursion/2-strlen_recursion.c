#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @w: The string t
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *w)
{
	int lon = 0;

	if (*w)
	{
		lon++;
		lon += _strlen_recursion(w + 1);
	}

	return (lon);
}

