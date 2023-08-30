#include "main.h"
/**
 * wildcmp - Compare strings
 * @sa1: pointer to string params
 * @sa2: pointer to string params
 * Return: 0
 */
int wildcmp(char *sa1, char *sa2)
{
	if (*sa1 == '\0')
	{
		if (*sa2 != '\0' && *sa2 == '*')
		{
			return (wildcmp(sa1, sa2 + 1));
		}
		return (*sa2 == '\0');
	}

	if (*sa2 == '*')
	{
		return (wildcmp(sa1 + 1, sa2) || wildcmp(sa1, sa2 + 1));
	}
	else if (*sa1 == *sa2)
	{
		return (wildcmp(sa1 + 1, sa2 + 1));
	}
	return (0);
}

