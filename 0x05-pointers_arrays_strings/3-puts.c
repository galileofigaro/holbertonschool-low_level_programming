#include "holberton.h"

/**
 * _puts - prints string and new line
 *
 *@str: string
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
