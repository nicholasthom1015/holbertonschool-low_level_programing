#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: first value of array
 * @max: last value of array
 *
 * Return: 0
 */
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
