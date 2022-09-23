#include "main.h"
/**
 * swap_int - swap values
 * @a: test character
 * @b: test character
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
