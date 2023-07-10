#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: a pointer
 * @s2: a pointer
 *
 * Return: 0 if strings are thesame
 */
int _strcmp(char *s1, char *s2)
{
	int i, result;

	i = 0;
	result = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	result = *(unsigned char*)s1 - *(unsigned char*)s2;
	return (result);
}
