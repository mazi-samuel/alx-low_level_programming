#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Retrun: void
 */
void times_table(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int n;

		int times;

		n = 0;
		while (n < 10)
		{
			times = n * i;
			if (!(times >= 10))
			{
				if (n > 0 && n <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(times + '0');
				n++;
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (times / 10));
				_putchar('0' + (times % 10));
				n++;
			}
		}
		_putchar('\n');
	}
}
