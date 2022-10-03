#include "main.h"
/**
 * _strpbrk - Searches string for any set of bytes
 * @s: test character
 * @accept: test character
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}
