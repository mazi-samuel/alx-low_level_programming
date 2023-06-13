#include "main.h"
/**
 * _isupper - checks upper or lower case
 * @c: a parameter
 *
 * Return: 0 lowercase or 1 if uppercase
 */
int _isupper(int c)
{
	if (c > 64 && c <= 90)
		return (1);
	return (0);
}
