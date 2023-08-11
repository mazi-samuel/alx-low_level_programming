#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of argument passed into a command line
 *
 * Return: Always 0 Successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	(void)argv;
	printf("%d\n", argc);
	return (0);
}
