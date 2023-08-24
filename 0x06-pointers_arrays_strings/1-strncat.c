#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int h;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	h = 0;
	while (h < n && src[h] != '\0')
	{
	dest[a] = src[h];
	a++;
	h++;
	}
	dest[a] = '\0';
	return (dest);
}
