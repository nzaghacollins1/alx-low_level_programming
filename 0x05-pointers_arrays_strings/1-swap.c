#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: first input
 * @b: second input
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
       	*a = *b;
	*b = i;
}
