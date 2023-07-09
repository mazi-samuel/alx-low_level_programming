#include<stdio.h>
#include<stdlib.h>
/**
 * _atoi - converts strings to integers
 * @s: a pointer to a string
 *
 * Return: returns an integer
 */
int _atoi(char *s)
{
	int result, i, sign, len, final;

	result = 0;
	len = 0;
	sign = 0;
	final = 0;
	while (s[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		if (s[i] == ' ')
			continue;
		else if (s[i] == '+')
			sign = 1;
		else if (s[i] == '-')
			sign = -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = (result * 10) + (s[i] - '0');
		}
		else
		{
			break;
		}
	}
	final = result * sign;
	return (final);
}
