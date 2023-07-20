#include "main.h"
/**
 * _strspn - get's the lenght of a prefix
 * @s: a pointer
 * @accept: a char pointer
 *
 * Return: returns an unsigned integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r - 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
