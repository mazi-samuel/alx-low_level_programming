#include "main.h"
/**
 * print_times_table - prints the nth times table
 * @n: a parameter
 *
 * Retrun: void
 */
void print_times_table(int n)
{
	int i;

	for (i = 0; i < (n + 1); i++)
	{
		int x;

		int times;

		x = 0;
		if (n > 0 && n < 15)
		{
			while (x < (n + 1))
			{
				times = x * i;
				if (!(times >= 10))
				{
					if (x > 0 && x <= n)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(times + '0');
					x++;
				}
				else if (times >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (times / 100));
					_putchar('0' + ((times / 10) % 10));
					_putchar('0' + (times % 10));
					x++;
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (times / 10));
					_putchar('0' + (times % 10));
					x++;
				}
			}
			_putchar('\n');
		}
	}
}
