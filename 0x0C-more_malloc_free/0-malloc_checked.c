#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size
 * Return: void pointer if succesful, 98 if failed
 */

void *malloc_checked(unsigned int b)
{
        void *array;

        array = malloc(b);

        if (!array)
                exit(98);

        return (array);
}
