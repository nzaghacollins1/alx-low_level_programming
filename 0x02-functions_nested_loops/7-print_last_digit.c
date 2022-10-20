#include "main.h"

/**
 *print_last_digit - print last digit
 *
 * Return: 0
 */
int print_last_digit(int x)
{
	int lastDigit = x % 10;

	if (x < 0)
	{
		lastDigit = -1;
	}
	_putchar(lastDigit + '0');

	return (lastDigit);
}
