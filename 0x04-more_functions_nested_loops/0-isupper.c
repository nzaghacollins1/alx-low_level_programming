#include "main.h"

/**
 * _isupper - function verifies if character is uppercase
 * @c: int value
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
        if (c >= 'A' && c <= 'Z')
                return (1);
        else
                return (0);
}
