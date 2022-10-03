#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: test character
 * @c: test character
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
