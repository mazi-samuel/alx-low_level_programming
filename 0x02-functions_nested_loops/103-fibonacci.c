#include<stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long a;

	long b;

	long c;

	int i;

	long sum;

	sum = 0;

	a = 1;
	b = 2;
	do
	{
		c = a + b;
		if (c % 2 == 0)
			sum += c;
		a = b;
		b = c;
	}while (c <= 4000000);
	printf("%ld", sum);
	printf("\n");
	return (0);
}
