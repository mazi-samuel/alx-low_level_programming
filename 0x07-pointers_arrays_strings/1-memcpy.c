#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory where it's stored
 * @src: memory where it's copied
 *
 * Return: copied memory with nbyted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r;
	int i;

	r = 0;
	i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
