#include<stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a;

	unsigned long int b;

	unsigned long int c;

	int i;

	a = 1;
	b = 2;
	printf("%lu, %lu, ", a, b);
	for (i = 0; i <= 98; i++)
	{
		c = a + b;
		if (i != 98)
		{
			printf("%lu, ", c);
			a = b;
			b = c;
		}
		else
			printf("%lu", c);
	}
	printf("\n");
	return (0);
}
