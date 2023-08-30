#include "main.h"
/**
 * _print_rev_recursion - reverse string.
 * @s: The string to .
 */
void _print_rev_recursion(char *d)
{
	if (*d)
	{
		_print_rev_recursion(d + 1);
		_putchar(*d);
	}
}
