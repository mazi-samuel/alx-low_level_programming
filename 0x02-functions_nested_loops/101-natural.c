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

	for (i = 0; i < 1000;)
	{
		sum = 0;
		if (i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	if (sum >= 1024)
		printf("%i", sum);
	return (0);
}
