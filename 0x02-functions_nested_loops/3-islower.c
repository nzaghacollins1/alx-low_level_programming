#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * Description: program that check for lowercase character
 *
 * Return: 1 or 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
