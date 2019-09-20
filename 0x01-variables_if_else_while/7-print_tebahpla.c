#include <stdio.h>

/**
 * main - Prints alphabet in esrever
 *
 * Return: zero
 */

int main(void)
{
	int count;

	for (count = 'z'; count >= 'a'; count--)
	{
		putchar(count);
	}
	putchar('\n');
	return (0);
}
