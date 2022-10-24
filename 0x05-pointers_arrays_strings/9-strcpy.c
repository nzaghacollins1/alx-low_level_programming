#include "main.h"

/**
 **_strcpy - function copies a string
 *@dest: first char
 *@src: second char
 *
 *Return: 0
 */
char *_strcpy(char *dest, char *src)
{
		int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	return (dest);
}
