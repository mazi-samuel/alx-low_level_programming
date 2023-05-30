#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		if ('a' + i == 101)
		{
			continue;
		}
		else if ('a' + i == 113)
		{
			continue;
		}
		else
		{
			putchar('a' + i);
		}
	}
	putchar('\n');
	return (0);
}
