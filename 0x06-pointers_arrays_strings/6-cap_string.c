#include "main.h"

/**
 *cap_string - capitalizes all strings
 *@i: string to return
 *
 *Return: @i
 */
char *cap_string(char *i)
{
	int j;

	for (j = 0; i[j] != '\0'; j++)
	{
		if (i[j] >= 'a' && i[j] <= 'z')
			i[j] = i[j] - 32;
	}

	return (i);
}
