#include "main.h"
/**
 * print_square - prints a square
 * @size: test character
 */
void print_square(int size)
{
	int height, length;

	if (size > 0)
	{
	for (height = 0; height < size; height++)
		{
		for (length = 0; length < size; length++)
			_putchar('#');

		if (height == size - 1)
			continue;
			_putchar('\n');
		}
	}
}
