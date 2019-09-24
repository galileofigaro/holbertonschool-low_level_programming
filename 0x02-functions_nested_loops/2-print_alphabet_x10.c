#include "holberton.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times, with new line
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char alpha;

	int count = 0;

	while (count < 10)
	{
		alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		count++;
	}
}
