#include "holberton.h"

/**
 * jack_bauer - Prints every minute of the day
 *
 * Return: zero
 */

void jack_bauer(void)
{
	int hours, mins;

	hours = 0;
	while (hours < 24)
	{
		mins = 0;
		while (mins < 60)
		{
			_putchar(hours / 10 + '0');
			_putchar(hours % 10 + '0');
			_putchar(':');
			_putchar(mins / 10 + '0');
			_putchar(mins % 10 + '0');
			_putchar('\n');
			mins++;
		}
		hours++;
	}

}
