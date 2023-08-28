#include "main.h"
/**
 * set_char_ptr_value - Sets the value of a char pointer.
 * @ptr: Pointer to a char pointer.
 * @value: Character value to set.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *e = haystack;
		char *r = needle;

		while (*e == *r && *r != '\0')
		{
			e++;
			r++;
		}

		if (*r == '\0')
			return (haystack);
	}

	return (0);
}

