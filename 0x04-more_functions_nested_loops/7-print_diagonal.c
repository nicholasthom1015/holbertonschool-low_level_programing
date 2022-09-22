#include "main.h"
/**
 * print_diagonal - prints diagonal line
 * @n: test character
 */
void print_diagonal(int n)
{
	int length;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
			_putchar(' ');
		_putchar('\\');
	}

	_putchar('\n');
}
