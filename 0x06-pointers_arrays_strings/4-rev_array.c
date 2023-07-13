#include "main.h"
/**
 * reverse_array - reverses the array content
 * @a: a pointer
 * @n: an integer parameter
 *
 * Retrun: void
 */
void reverse_array(int *a, int n)
{
	int i, t;
	
	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
		
}
