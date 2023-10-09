#include <unistd.h>
#include "main.h"
/**
 * _puts_recursion - writes the character s to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
