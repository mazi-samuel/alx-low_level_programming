#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of argument passed into a command line
 * @argc: the number of command line argument
 * @argv: an array of command line arguments
 *
 * Return: Always 0 Successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
