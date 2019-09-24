#include "holberton.h"

/**
 * _abs - absolute value of a number
 *@num: number
 * Return: num
 */

int _abs(int num)
{

	if (num >= 0)
	{
		return (num);
	}
	else
	{
		num = num * -1;
		return (num);
	}
}
