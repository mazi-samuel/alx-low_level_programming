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
	int result;

	int sign;

	int i;

	result = 0;

	i = 0;

	sign = 0;

	while (s[i] == ' ')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		sign = (str[i++] == '-') ? -1 : 1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0')
		i++;
	}
	return (sign * result);
}
