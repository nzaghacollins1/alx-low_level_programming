#include "main.h"
#include <stdio.h>

/**
 *_print_array - print n element of an array
 *@a: first int
 *@n: second int
 *
 *Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
		printf("%d, ", a[i]);
		if (i == (n - 1))
			printf("%d", a[n - 1]);
	printf("\n");
}
