#include "main.h"
/**
 * print_rev - reverses the print
 * @s: a pointer
 *
 * Return: void
 */
void print_rev(char *s)
{

	if (*s != '\0')
	{
		print_rev(s + 1);
		_putchar(*s);
	}
	_putchar('\n');
}
