#include "function_pointers.h"
/**
 * int_index - searches an integer
 * @array: array of integer
 * @size: fize of array
 * @cmp: pointer to function
 *
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
