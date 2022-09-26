#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: test character
 */
void print_rev(char *s)
{
	int length = 0, index;

	while (s[index++])
		length++;

	for (index = length - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
