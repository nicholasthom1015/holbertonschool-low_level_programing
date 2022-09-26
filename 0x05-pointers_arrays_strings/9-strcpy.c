#include "main.h"
/**
 * _strcpy - copy string pointer
 * @dest: test character
 * @src: test character
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
