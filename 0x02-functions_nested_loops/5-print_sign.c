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
int print_sign(int n);
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);

	}
	else (n == 0) 
		
	{
		_putchar('0');
		return (0);
	}
}
