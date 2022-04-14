#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * @array: array on which fn acts
 * @size: array size
 * action: pointer to fn to act that takes arg int
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
