#include "main.h"
/**
 * _isalpha - Returns 1 if c is a letter and 0 otherwise
 * @c: a parameter
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
