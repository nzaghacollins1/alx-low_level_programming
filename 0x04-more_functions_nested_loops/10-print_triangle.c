#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: triangle size
 * Return: 0
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)

		_putchar(10);

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= (size - 1); j++)
		{
			if (j <= i)
				_putchar(35);
			else
				_putchar(32);
		}
		_putchar('\n');
	}
}

