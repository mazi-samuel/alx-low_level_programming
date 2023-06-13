#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: a parameter
 *
 * Return: 0 if c is a digit if not 0
 */
int _isdigit(int c)
{
	if (c > 47 && c <= 57)
		return (1);
	return (0);
}
