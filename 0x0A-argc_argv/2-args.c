#include <stdio.h>
#include "main.h"
/**
 * main - prints the arguments to a command line
 * @argc: the number of command line argument
 * @argv: an array of the command line argument
 *
 * Return: Always 0 successful
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
			
	}
	return (0);
}
