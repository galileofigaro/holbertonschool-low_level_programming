#include "holberton.h"

/**
 * _pow_recursion - returns value of x raised to the power of y
 *@x: return value
 *@y: power of value
 * Return: value of x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));


}
