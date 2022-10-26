#include "main.h"

/**
 **_strcat - concatenates two strings
 *@dest: first string
 *@src: second string
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int con1 = 0;
	int cat2 = 0;

	while (dest[con1] != '\0')
	{
		con1++;
	}

	while (src[cat2] != '\0')
	{
		dest[con1 + cat2] = src[cat2];
		cat2++;
	}
	dest[con1 + cat2] = '\0';

	return (dest);
}
