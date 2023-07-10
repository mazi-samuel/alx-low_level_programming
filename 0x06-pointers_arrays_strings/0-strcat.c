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
	char *combined;

	int i, j, len1, len2;
	
	combined = dest;

	len1 = 0;
	len2 = 0;

	while (dest[len1] != '\0')
		len1++;
	while (src[len2] != '\0')
		len2++;
	for (i = 0; i < len1; i++)
	{
		combined += dest[i];
	}
	_putchar(' ');
	for (j = 0; j < len2; j++)
	{
		combined += src[j];
	}
	_putchar('\n');
	return (combined);

}
