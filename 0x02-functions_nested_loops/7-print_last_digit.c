#include "main.h"
/**
 * print_last_digit - this function returns the last digit of the number
 * @n: a parameter
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar('0' + last);
	return (last);
}
