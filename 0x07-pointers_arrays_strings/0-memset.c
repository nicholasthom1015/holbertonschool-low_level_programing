#include "main.h"
#include <stddef.h>
/**
 * _memset - fills memory with a constant byte
 * @s: test character
 * @b: test character
 * @n: test character
 * Return: 0
 */
void *_memset(char *s, int b, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
