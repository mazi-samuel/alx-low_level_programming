#include "main.h"
/**
 * _strcat - concatenates strings
 * @dest: a pointer
 * @src: a pointer
 *
 * Return: returns a concatenated character
 */
char *_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);

}
