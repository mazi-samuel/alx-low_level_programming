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

	a = 1;
	b = 2;
	printf("%ld, %ld, ", a, b);
	for (i = 0; i <= 98; i++)
	{
		c = a + b;
		printf("%ld, ", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
