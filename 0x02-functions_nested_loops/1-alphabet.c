#include "holberton.h"

/**
 * main - print lowercase alphabet and new line
 *
 * Return: void
 */

void print_alphabet(void)
{
	char count;

	for (count = 'a'; count <= 'z'; count++)
	{
		_putchar(count);
	}
	_putchar('\n');
}
