#include "main.h"
/**
 * cap_string - capitalises words
 * @n: a pointer to a string
 *
 * Return: a pointer to a character
 */
char *cap_string(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		while (!(n[i] >= 'a' && n[i] <= 'z'))
			i++;
		if (n[i - 1] == ' '  ||
		    n[i - 1] == '\t' ||
		    n[i - 1] == '\n' ||
		    n[i - 1] == ',' ||
		    n[i - 1] == '.' ||
		    n[i - 1] == ';' ||
		    n[i - 1] == '!' ||
		    n[i - 1] == '?' ||
		    n[i - 1] == '"' ||
		    n[i - 1] == '(' ||
		    n[i - 1] == ')' ||
		    n[i - 1] == '{' ||
		    n[i - 1] == '}')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
