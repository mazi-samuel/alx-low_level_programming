#include "main.h"
/**
 * _islower - checks for upper or lowercase of alphabets
 * @c: this program takes in c as an argument
 *
 * Return: 1 is lowercase or 0 is uppercase
 */
int _islower(int c)
{
	if (c >= 65 && c <= 90)
		return (0);
	else if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
