#include "main.h"

/**
 *_strcmp - compares two strings
 *@s1: compare against
 *@s2: compare to
 *
 *Return: int value
 */
int _strcmp(char *s1, char *s2)
{
	int j;

	j = 0;
	while (s1[j] != '\0' && s2[j] != '\0')
	{
		if (s1[j] != s2[j])
			return (s1[j] - s2[j]);
		j++;
	}

	return (s1[j] - s2[j]);
}
