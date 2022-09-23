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
		for (length = 1; length <= size; length++)
		{

			for (space = size - length; space > 0; space--)
				_putchar(' ');

			for (space = 0; space < length; space++)
				_putchar('#');

			if (length == size)
				continue;

		_putchar('\n');

		}
	}

	_putchar('\n');
}
