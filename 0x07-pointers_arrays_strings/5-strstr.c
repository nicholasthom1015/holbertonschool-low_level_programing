#include "main.h"
/**
 * _strstr - Locates a substring
 * @haystack: test character
 * @needle: test character
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[idex] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

						index++

			} while (haystack[inex] == needle[index]);
		}

		haystack++;

	}

		return ('\0');
}
