#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @a: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *a)
{
	int h = 0;

	while (a[h])
	{
		while (!(a[h] >= 'a' && a[h] <= 'z'))
			h++;

		if (a[h - 1] == ' ' ||
		    a[h - 1] == '\t' ||
		    a[h - 1] == '\n' ||
		    a[h - 1] == ',' ||
		    a[h - 1] == ';' ||
		    a[h - 1] == '.' ||
		    a[h - 1] == '!' ||
		    a[h - 1] == '?' ||
		    a[h - 1] == '"' ||
		    a[h - 1] == '(' ||
		    a[h - 1] == ')' ||
		    a[h - 1] == '{' ||
		    a[h - 1] == '}' ||
		    h == 0)
			a[h] -= 32;

		h++;
	}

	return (a);
