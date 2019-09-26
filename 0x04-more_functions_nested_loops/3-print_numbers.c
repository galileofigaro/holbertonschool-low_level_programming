#include "holberton.h"

/**
 * print_numbers - Prints numbers 0-9
 *
 * Return: void
 */

void print_numbers(void)
{

	int count;

	for (count = 0; count <= 9; count++)
	{
		_putchar(count);
	}

	_putchar('\n');
}
