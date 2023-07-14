#include "main.h"
/**
 * string_toupper - converts from lowerecase to uppercase
 * @n: a string pointer
 * 
 * Return: returns an uppercase character
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
			i++;
		}
	}
	return (n);
}
