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

	int j;

	for (i = 0; i < 26; i++)
	{
		putcchar('a' + i);
	}
	for (j = 0; j < 26; j ++)
	{
		putchar('A' + j);
	}
	putchar('\n');
	return (0);
}
