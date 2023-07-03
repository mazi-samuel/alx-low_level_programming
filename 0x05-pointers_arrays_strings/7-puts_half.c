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

	while (str[len] != '\0')
		len++;
	if (len % 2 != 0)
		n = (len - 1) / 2;
	else
		n = len / 2;
	for (i = 0; i <= n; i++)
	{
		if (str[n + i] != '\0')
			_putchar(str[n + i]);
	}
	_putchar('\n');
}