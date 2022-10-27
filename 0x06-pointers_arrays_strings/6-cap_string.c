#include "main.h"

/**
 *cap_string - capitalizes all strings
 *@j: string to return
 *
 *Return: caps on first letter
 */
char *cap_string(char *j)
{
	int i, x;
	int cap = 32;
	int separators[] = {',', ';', '.', '?', '"',
			    '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; j[i] != '\0'; i++)
	{
		if (j[i] >= 'a' && j[i] <= 'z')
		{
			j[i] = j[i] - cap;
		}

		cap = 0;

		for (x = 0; x <= 12; x++)
		{
			if (j[i] == separators[x])
			{
				x = 12;
				cap = 32;
			}
		}
	}
	return (j);
}
