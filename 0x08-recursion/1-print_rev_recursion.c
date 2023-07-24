#include "main.h"
/**
 * _print_rev_recursion - reverses an input
 * @s: a char pointer
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
