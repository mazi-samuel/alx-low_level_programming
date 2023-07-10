#include "main.h"
/**
 * _strncat - concertenates strings
 * @dest: a pointer
 * @src: a pointer
 * @n: an integer parameter
 *
 * Return: a pointers
 */
char *_strncat(char *dest, char *src, int n)
{
	char *pointer;

	int i;

	i = 0;

	pointer = dest;
	while (*pointer != '\0')
	{
		pointer++;
	}
	while (*src != '\0' && i < n)
	{
		*pointer = *src;
		pointer++;
		src++;
		i++;
	}
	pointer = '\0';
	return (dest);
}
