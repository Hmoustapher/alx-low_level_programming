#include "main.h"
int actual_sqrt_recursion(int t, int i);
/**
 * _sqrt_recursion - return square root of a numbe
 * @t: nu,ber of recursive squar
 * Return:  square root
 */
int _sqrt_recursion(int t)
{
	if (t < 0)
		return (-1);
	return (actual_sqrt_recursion(t, 0));
}
/**
 * actual_sqrt_recursion - recursive squares 
 * @t: calculate the sqaure root 
 * @i: iterator
 *
 * Return: some
 */
int actual_sqrt_recursion(int t, int i)
{
	if (i * i > t)
		return (-1);
	if (i * i == t)
		return (i);
	return (actual_sqrt_recursion(t, i + 1));
}
