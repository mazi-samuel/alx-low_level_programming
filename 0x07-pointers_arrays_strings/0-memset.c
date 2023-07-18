#include "main.h"
/**
 * _memset fills memory with a constant byte
 * @s: a char pointer
 * @b: a char array
 * @n: an integer parameter
 *
 * Return: returns a pointer to a character
 */
char *_memset(char *s, char b, unsigned int n) 
{
	unsigned int i;

	for (i = 0; i < n; i++) 
	{
		s[i] = b;
		n--;
	}
	return (s);
}
