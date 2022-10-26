#include "main.h"

/**
 *_strncat - concatenates two strings
 *@dest: string to be modified
 *@src: dtring to concatenate
 *@n: string to copy
 *
 *Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int con1 = 0;
	int cat2 = 0;

	while (dest[con1] != '\0')
	{
		con1++;
	}

	while (cat2 < n && src[cat2] != '\0')
	{
		dest[con1 + cat2] = src[cat2];
		cat2++;
	}
	dest[con1 + cat2] = '\0';

	return (dest);
}
