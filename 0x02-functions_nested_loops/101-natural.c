#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	int sum;

	sum = 0;

	for (i = 0; i < 1000;)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	if (sum >= 1024)
		printf("%i", sum);
	printf("\n");
	return (0);
}
