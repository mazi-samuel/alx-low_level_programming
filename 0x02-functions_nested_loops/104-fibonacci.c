#include<stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	double long a;

	double long b;

	double long c;

	int i;

	a = 1;
	b = 2;
	printf("%lf, %lf, ", a, b);
	for (i = ; i <= 98; i++)
	{
		c = a + b;
		if (i != 98)
		{
			printf("%lf, ", c);
			a = b;
			b = c;
		}
		else
			printf("%lf", c);
	}
	printf("\n");
	return (0);
}
