#include "main.h"
/**
 * _print_rev_recursion - writes the character s to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
        {
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
