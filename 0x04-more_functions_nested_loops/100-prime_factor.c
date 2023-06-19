#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	long int i;

	int j, highest;

	highest = 0;
	for (i = 2; i <= 612852475143; i++)
	{
		if (612852475143 % i == 0)
		{
			for (j = 2; j <= i/2; j++)
			{
				if (i % j != 0)
				{
					if (i > highest)
					{
						highest = i;
					}
				}
			}
		}
	}
	printf("the highest prime factor is %i", highest);
	return (0);

}
