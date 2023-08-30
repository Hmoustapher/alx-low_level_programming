#include "main.h"
int check_pal(char *sa, int i, int len);
int _strlen_recursion(char *sa);
/**
 * is_palindrome - whether is a plllindrome
 * @sa: string re
 * Return: 1 if , 0 else
 */
int is_palindrome(char *sa)
{
if (*sa == 0)
return (1);
return (check_pal(sa, 0, _strlen_recursion(sa)));
}
/**
 * _strlen_recursion - return string
 * @sa: string to ca
 * Return: length of the string
 */
int _strlen_recursion(char *sa)
{
if (*sa == '\0')
return (0);
return (1 + _strlen_recursion(sa + 1));
}
/**
 * check_pal - checks the char recursively 
 * @sa: string to check
 * @i: iterator
 * @len: length of the string
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *sa, int i, int len)
{
if (*(sa + i) != *(sa + len - 1))
return (0);
if (i >= len)
return (1);
return (check_pal(sa, i + 1, len - 1));
}
