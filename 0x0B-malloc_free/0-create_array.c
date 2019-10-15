#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - create an array of chars, with specific char
 *@size: size of array
 *@c: the specific character
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int count;

	if (size == 0)
		return (NULL);

	array = malloc(size * (sizeof(*array)));

	for (count = 0; count < size; count++)
		array[count] = c;

	return (array);



}
