#include "holberton.h"

/**
 * swap_int - swaps values of two integers
 *@a: first value
 *@b: second value
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int copy = *a;

	*a = *b;
	*b = copy;
}
