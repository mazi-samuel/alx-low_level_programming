#include "main.h"
/**
 * rev_string - reverse string
 * @s: a parameter
 *
 * Return: void
 */
void rev_string(char *s)
{
	int lenght, i, j;

	char temp;

	lenght = 0;
	i = 0;

	while (s[lenght] != '\0')
		lenght++;
	j = lenght - 1;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
