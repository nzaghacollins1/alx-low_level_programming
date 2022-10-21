#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: integer
 * Return: 0
 */
void print_diagonal(int n)
{
	int j, line;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			for (line = 0; line < j; line++)
			{
				putchar(10);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
