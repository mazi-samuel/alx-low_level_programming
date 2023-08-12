#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - mulpliplies two numbers recieved as a command line argument
 * @argc: the number of command line argument
 * @argv: an array of the commend line argument
 *
 * Return: Always 0 successful
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
	
}
