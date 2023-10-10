#include "main.h"
/**
 * _strlen_recursion - returns the lenght of a string
 * @s: a pointer to a string
 *
 * Return: 1 if successful
 */  
 int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
