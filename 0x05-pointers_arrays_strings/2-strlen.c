#include "main.h"
#include<stdio.h>
/**
 * _strlen - counts string lenght
 * @s: a parameter
 *
 * Return: void
 */
int _strlen(char *s)
{
	int i;

	int x;

	x = 0;

	for (i = 0; i <= s[i - 1]; i++)
	{
		if (s[i] != EOF)
		{
			x++;
		}
	}
	return (x - 1);
}
