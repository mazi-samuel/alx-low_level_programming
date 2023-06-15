#include "main.h"
/**
 * print_diagonal - prints \ diagonally
 * @n: a parameter
 *
 * Return: void
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		int j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar(92);
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
