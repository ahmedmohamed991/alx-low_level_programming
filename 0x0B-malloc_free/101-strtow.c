#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int ahmed, x, y;

	ahmed = 0;
	y = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == ' ')
			ahmed = 0;
		else if (ahmed == 0)
		{
			ahmed = 1;
			y++;
		}
	}

	return (y);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **ahmed, *y;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	ahmed = (char **) malloc(sizeof(char *) * (words + 1));
	if (ahmed == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				y = (char *) malloc(sizeof(char) * (c + 1));
				if (y == NULL)
					return (NULL);
				while (start < end)
					*y++ = str[start++];
				*tmp = '\0';
				ahmed[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	ahmed[k] = NULL;

	return (ahmed);
}
