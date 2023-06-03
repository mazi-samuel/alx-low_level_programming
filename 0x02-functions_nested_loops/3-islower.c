/**
 * int _islower - checks for upper or lowercase of alphabets
 *
 * Return: 1 is lowercase or 0 is uppercase
 */
int _islower(int c)
{
	if ('c' >= 65 && 'c' <= 90)
	{
		return (0);
	}
	else if ('c' >= 97 && 'c' <= 112)
	{
		return (1);
	}
}
