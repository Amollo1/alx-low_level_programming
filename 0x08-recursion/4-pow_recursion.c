#include "main.h"

/**
 * _pow_recursion - calculates the value of x raised to the power of y
 * @x: The value to multiply
 * @y: The power of value x
 * Return: The value of x rised tothe power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
