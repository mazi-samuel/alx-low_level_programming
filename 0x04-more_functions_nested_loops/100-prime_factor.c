#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	long i, number, highest, square_root;

	number = 612852475143;

	square_root = sqrt(number);

	highest = 0;
	for (i = 1; i <= square_root; i++)
	{
		if (number % i == 0)
		{
			highest = number / i;
		}
	}
	printf("the highest prime factor is %ld", highest);
	return (0);

}
