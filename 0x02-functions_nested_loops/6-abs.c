#include "main.h"
/**
 * _abs - prints the absolute value of an integer
 * @n: a parameter
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -1 * n;
	}
	return (n);
}
