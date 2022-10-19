#include "main.h"

/**
 *_isalpha - function check alphabetic character
 *
 *Description: checks for alpha
 *
 *Return: 1 or 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
