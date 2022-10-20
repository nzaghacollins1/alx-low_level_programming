#include "main.h"
#include <stdio.h>

/**
 * _isdigital - function check for a digit
 * @c: int value
 * Return: 1 if c is a digit or returns 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
