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

	for (i = 0; i < 10;)
	{
		for (j = 1; j < 10; j++)
		{
			if (i == j)
			{
				continue;
			}
			else if (i > j)
			{
				continue;
			}
			else
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
