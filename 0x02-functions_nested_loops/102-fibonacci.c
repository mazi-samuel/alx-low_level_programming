#include<stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	int b;

	int c;

	int i;

	a = 1;
	b = 2;
	printf("%i, %i, ", a, b)

	for (i = 0; i <= 98; i++)
	{
		c = a + b;
		printf("%i", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
