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
	char i;

	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
