#include "main.h"
#include <string.h>
/**
 * _strlen - length of string
 * @s: test character
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
