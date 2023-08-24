#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int h = 0;

	while (str[h])
	{
		while (!(str[h] >= 'a' && str[h] <= 'z'))
			h++;

		if (str[h - 1] == ' ' ||
		    str[h - 1] == '\t' ||
		    str[h - 1] == '\n' ||
		    str[h - 1] == ',' ||
		    str[h - 1] == ';' ||
		    str[h - 1] == '.' ||
		    str[h - 1] == '!' ||
		    str[h - 1] == '?' ||
		    str[h - 1] == '"' ||
		    str[h - 1] == '(' ||
		    str[h - 1] == ')' ||
		    str[h - 1] == '{' ||
		    str[h - 1] == '}' ||
		    h == 0)
			str[h] -= 32;

		h++;
	}

	return (str);
