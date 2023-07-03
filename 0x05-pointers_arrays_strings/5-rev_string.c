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
	for (i = 0; i < lenght; i++)
	{
		temp = s[i];
		s[i] = s[lenght - 1 - i];
		s[lenght - 1 - i] = temp;
		_putchar(temp);
	}
	_putchar('\n');
}
