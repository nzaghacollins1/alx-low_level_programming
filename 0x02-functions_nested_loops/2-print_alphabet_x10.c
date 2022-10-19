#include "main.h"

/**
 *
 * main - prints x10 the alphabet in lowercase
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		char ab;

		for (ab = 'a'; ab < 'z'; ab++)
		{
			_putchar(ab);
		}
		_putchar('\n');
	}
}
