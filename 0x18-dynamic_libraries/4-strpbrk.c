#include "main.h"
/**
 * set_char_ptr_value - Sets the value of a char pointer.
 * @ptr: Pointer to a char pointer.
 * @value: Character value to set.
 */
char *_strpbrk(char *f, char *accept)
{
		int g;

		while (*f)
		{
			for (g = 0; accept[g]; g++)
			{
			if (*f == accept[g])
			return (f);
			}
		f++;
		}

	return ('\0');
}

