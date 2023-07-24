#include "main.h"
/**
 * factorial - gives the factorial of a given number
 * @n: an integer parameter
 *
 * Return: an integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
