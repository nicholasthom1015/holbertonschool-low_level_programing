#include "main.h"
#include <stddef.h>
/**
 * _memset - fills memory with a constant byte
 * @s: test character
 * @c: test character
 * @n: test character
 * Return: 0
 */
char *_memset(char *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
