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

	for (i = 0; i <= 48; i++)
	{
		c = a + b;
		printf("%i, ", c);
		printf("\n");
		a = b;
		b = c;
	}
	return (0);
}
