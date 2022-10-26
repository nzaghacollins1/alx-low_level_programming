#include "main.h"

/**
 *reverse_array - reverses array of integers
 *@a: array to be rev
 *@n: element of rev
 *
 *Return: nothing
 */
void reverse_array(int *a, int n)
{
	int rev;
	int j;

	n--;
	for (j = 0; j < n; j++)
	{
		rev = a[j];
		a[j] = a[n];
		a[n] = rev;
		n--;
	}
}
