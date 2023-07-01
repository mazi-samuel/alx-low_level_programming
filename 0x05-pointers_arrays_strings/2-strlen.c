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
	int x;

	x = 0;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	return (x);
}
