#include "main.h"
/**
 * print_sign - checks the sign of a number
 * @n: a aparameter
 *
 * Return: 1 if greater than 0, 0 when zero and negative 1 if less than 1
 */
int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
