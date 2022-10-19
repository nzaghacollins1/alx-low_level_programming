#include "main.h"

/**
 *
 * main - prints x10 the alphabet in lowercase
 *
 * Return: 0
 */

void print_alphabet_x10(void);
{
	int a;

	for (a = 0; a < 10; a++)
	{
		char a;

		for (b = 0; b < 10; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
