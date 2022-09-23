#include "main.h"
/**
 * _puts - prints string to stdout
 * @str: test character
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
