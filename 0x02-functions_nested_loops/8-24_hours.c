#include "main.h"
/**
 * jack_bauer - prints the minute countdown
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i;

	int j;

	int k;

	int l;

	for (i = 0; i < 3;)
	{
		for (j = 0; j < 10;)
		{
			if (i <= 2 && (i + j) < 6)
			{
				for (k = 0; k < 6;)
				{
					for (l = 0; l < 10; l++)
					{
						_putchar('0' + i);
						_putchar('0' + j);
						_putchar(':');
						_putchar('0' + k);
						_putchar('0' + l);
						_putchar('\n');

					}
					k++;
				}
			}
			j++;
		}
		i++;
	}
}
