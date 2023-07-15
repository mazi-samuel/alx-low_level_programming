#include "main.h"
/**
 * rot13 - encodes strings
 * @n: a pointer
 *
 * Return: a char pointer
 */
char *rot13(char *n)
{
	int i, j;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (n[i] == input[j])
			{
				n[i] = output[j];
				break;
			}
		}
	}
	return (n);
}
