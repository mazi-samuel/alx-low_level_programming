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
				_putchar(times + '0');
				_putchar(',');
				_putchar(' ');
				n++;
			}
			else
			{
				_putchar('0' + (times / 10));
				_putchar('0' + (times % 10));
				_putchar(',');
				_putchar(' ');
				n++;
			}
		}
		_putchar('\n');
	}
}
