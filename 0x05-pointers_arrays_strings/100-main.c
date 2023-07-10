#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * _atoi - converts strings to integers
 * @s: a pointer to a string
 *
 * Return: returns an integer
 */
int _atoi(char *s)
{
	int c, nin, isi;

	c = 0;
	nin = 1;
	isi = 0;

	unsigned int ni = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			nin *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}
		if (isi == 1)
		{
			break;
		}
		c++;
	}
	ni += nin;
	return (ni);
}
