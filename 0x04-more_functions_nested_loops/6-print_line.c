#include "main.h"
/**
 * print_line - prints line
 * @n: a aparameter
 *
 * Return: void
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
