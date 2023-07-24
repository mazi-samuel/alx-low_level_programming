#include "main.h"
/**
 * _strlen_recursion - counts the string length
 * @s: a char pointer
 *
 * Return: the string length as integer
 */
int _strlen_recursion(char *s)
{
	int lenght = 0;

	if (*s)
	{
		lenght++;
		lenght += _strlen_recursion(s + 1);
	}
	return (lenght);
}
