#include "main.h"
#include <stdio.h>
/**
 * print_array - print array
 * @a: test character
 * @n: test character
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");

	}
	_putchar('\n');
}
