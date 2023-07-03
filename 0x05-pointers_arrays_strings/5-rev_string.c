#include "main.h"
/**
 * rev_string - reverse string
 * @s: a parameter
 *
 * Return: void
 */
void rev_string(char *s)
{
	int lenght, i;

	char temp;

	lenght = 0;

	while (s[lenght] != '\0')
		lenght++;
	for (i = lenght - 1; i >= 0; i--)
	{
		_putchar(s[i])
	}
	_putchar('\n');
}
