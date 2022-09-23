#include "main.h"
/**
 * print_triangle - print triangle
 * @size: test character
 */
void print_triangle(int size)
{
	int length, space;

	if (size > 0)
	{
		for (length = 0; length < size; length++)
		{
			for (space = 0; space < length; space++)
			_putchar('#');
		_putchar('#');

		if (length == size - 1)
			continue;
		_putchar('\n');

		}
	}

	_putchar('\n');
}
