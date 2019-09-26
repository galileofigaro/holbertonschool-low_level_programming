#include "holberton.h"

/**
 * print_most_numbers - Print numbers 0-9 except 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{

	int count = 0;

	for (count = '0'; count <= '9'; count++)
	{
		if (count != '2' && count != '4')
		{
			_putchar(count);
		}
	}
	_putchar('\n');
}
