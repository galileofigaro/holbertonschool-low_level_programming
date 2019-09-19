#include <stdio.h>

/**
 * main - Print numbers
 *
 * Return: zero
 */

int main(void)
{
	int count;

	for (count = '0'; count <= '9'; count++)
	{
		putchar(count);
	}

	putchar('\n');
	return (0);
}
