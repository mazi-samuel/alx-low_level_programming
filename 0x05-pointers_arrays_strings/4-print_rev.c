#include "main.h"
/**
 * print_rev - reverses the print
 * @s: a pointer
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	i = -1;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
