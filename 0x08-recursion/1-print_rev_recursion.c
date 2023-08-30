#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *d)
{
if (*d)
{
_print_rev_recursion(d + 1);
_putchar(*d);
}
}
