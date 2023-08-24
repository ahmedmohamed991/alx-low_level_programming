#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int a, t;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (t = 0; t < 10; t++)
		{
			if (n[a] == s1[t])
			{
				n[a] = s2[t];
			}
		}
	}
	return (n);
}
