#include <stdio.h>
#include "main.h"
#include<limits.h>
int _atoi(char *s)
{
	int sign;

       	sign = 1;

	int result;

	result = 0;

	while (*s == ' ') 
	{
		s++;
	}

	if (*s == '+' || *s == '-') 
	{
		sign = (*s == '-') ? -1 : 1;
		s++;
	}
	while (*s >= '0' && *s <= '9') 
	{
		int digit 
			
		digit = *s - '0';
		if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10)) 
		{
			return ((sign == 1) ? INT_MAX : INT_MIN);
		}

		result = result * 10 + digit;
		s++;
	}
	return (result * sign);
}
