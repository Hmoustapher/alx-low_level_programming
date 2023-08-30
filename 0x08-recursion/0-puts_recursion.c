#include "main.h"
/**
 * _puts_recursion - main fucntion;
 * @w: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *w)
{
	if (*w)
	{
		_putchar(*w);
		_puts_recursion(w + 1);
	}

	else
		_putchar('\n');
}

