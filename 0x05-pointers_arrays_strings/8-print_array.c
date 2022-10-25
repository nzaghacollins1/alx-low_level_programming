#include <stdio.h>
#include "main.h"

/**
 *print_array - print n element of an array
 *@a: first int
 *@n: second int
 *
 *Return: 0
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
