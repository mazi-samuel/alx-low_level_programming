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

	for (i = 0; i < 8;)
	{
		for (j = 1; j < 9;)
		{
			for (k = 2; k < 10; k++)
			{
				if (i == j || j == k)
				{
					continue;
				}
				else if (i > j || j > k)
				{
					continue;
				}
				else
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
					putchar(',');
					putchar(' ');
				}

			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
