#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int h;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	h = 0;
	while (src[h] != '\0')
	{
		dest[a] = src[h];
		a++;
		h++;
	}

	dest[a] = '\0';
	return (dest);
}
