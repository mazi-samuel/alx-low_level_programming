#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: a char pointer
 * @b: a char array
 * @n: an integer parameter
 *
 * Return: returns a pointer to a character
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
