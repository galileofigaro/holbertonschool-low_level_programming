#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: number of elements in array
 * @cmp: pointer to function that compares values
 * Return: index of the first element for which cmp does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (count = 0; count < size; count++)
			if ((cmp(array[count])) == 1)
				return (count);
			else if (count == size)
				return (-1);
	}
	return (-1);
}
