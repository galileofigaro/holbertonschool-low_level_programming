#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function on each element of an array
 * @array: array
 * @size: size of array
 * @action: function to execute on array elements
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count;

	if (array && action)
	{
		for (count = 0; count < size; count++)

		{
			action(array[count]);
		}
	}
}
