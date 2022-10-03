#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: test character
 * @b: test character
 * @n: test character
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
