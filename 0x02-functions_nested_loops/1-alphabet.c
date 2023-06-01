#include "main.h"
/**
 * print_alphabet - prints alphabet in lower case
 *
 * Return: Always 0 (Success) or void
 */
void print_alphabet(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar('a' + i);
	}
	_putchar('\n');
}
