#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *x = needle;

		while (*a == *x && *x != '\0')
		{
			a++;
			x++;
		}

		if (*x == '\0')
			return (haystack);
	}

	return (0);
}
