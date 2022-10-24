#include "main.h"
#include <stddef.h>
/**
 * array_iterator - executes function given as parameter on element of array
 * @array: the array
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
