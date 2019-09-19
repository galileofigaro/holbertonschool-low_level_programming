#include <stdio.h>

/**
 * main - Print alphabet except e and q
 *
 * Return: zero
 */

int main(void)
{
	char shift;

	for (shift = 'a'; shift <= 'z'; shift++)
	{
		if (shift != 'e' && shift != 'q')
			putchar(shift);
	}


	putchar('\n');
	return (0);
}
