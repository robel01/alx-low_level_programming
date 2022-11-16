#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * parameter on each element of an array.
 * @array: input array.
 * @size: number of elements in @array
 * @cmp: pointer to function.
 *
 * Return: returns the index of the first element for
 * which the cmp function does not return 0.
 * If no elements matches,
 * return -1. If size <= 0, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array && size && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (j = 0; j < size; j++)
		{
			if (cmp(array[j]))
			{
				return (j);
			}
		}
	}

	return (-1);
}
