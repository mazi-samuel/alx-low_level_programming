#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	int j;

	int k;

	int l;

	for (i = 0; i < 10;)
	{
		for (j = 0; j < 9;)
		{
			for (k = 0; k < 10;)
			{
				for (l = 1; l < 10; l++)
				{
					if (i + j != k + l)
					{
						putchar('0' + i);
						putchar('0' + j);
						putchar(' ');
						putchar('0' + k);
						putchar('0' + l);
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
