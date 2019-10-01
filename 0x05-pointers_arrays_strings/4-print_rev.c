#include "holberton.h"

/**
 * print_rev - prints string in reverse, new line
 *@s: string to be printed
 *
 */

void print_rev(char *s)
{
	int order;

	while (*s != '\0')
	{
		order++;
		s++;
	}
	while (order > 0)
	{
		order--;
		s--;
	}
	_putchar('\n');
}
