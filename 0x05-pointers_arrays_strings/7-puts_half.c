#include "main.h"
/**
 * puts_half - prints half the charwacters
 * @str: a parameter
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len, i, n;

	len = 0;

	while (str[len] != '\0')
		len++;
	if (len % 2 != 0)
		n = (len - 1) / 2 + 1;
	else
		n = len / 2;
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
