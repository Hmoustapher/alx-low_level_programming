#include "main.h"
/**
 * set_char_ptr_value - Sets the value of a char pointer.
 * @ptr: Pointer to a char pointer.
 * @value: Character value to set.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
