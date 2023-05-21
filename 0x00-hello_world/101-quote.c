#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Successful)
*/
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	
	write(2, quote, 59);
	return (1);
}
