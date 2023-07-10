#include "main.h"
/**
 * _strncpy - copies string
 * @dest: a pointer
 * @src: a pointer
 * @n: an integer
 *
 * Return: a character pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *pointer;

	int i;

	i = 0;

	pointer = dest;
	while (*src != '\0' && i < n)
	{
		*pointer = *src;
		src++;
		pointer++;
		i++;
	}
	pointer = '\0';
	_putchar('0' + '\n');
	return (dest);
}
