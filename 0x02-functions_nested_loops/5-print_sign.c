#include "main.h"

/**
 * print_sign - function print sign of a number
 *
 *@n:input
 *
 * Description: print sign of a number
 *
 * Return: 1 or 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		n = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		n = 0;
		_putchar('0');
	}
	else if (n < 0)
	{
		n = -1;
		_putchar('_');
	}
	return (n);
}
