#include "main.h"
/**
 * _pow_recursion - raises an integer to the power of the other
 * @x: an integer parameter
 * @y: an integer parameter
 *
 * Return: returns x raised to power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
