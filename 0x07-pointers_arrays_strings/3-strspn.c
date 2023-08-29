#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int a, x;

for (a = 0; s[a] != '\0'; a++)
{
for (x = 0; accept[x] != s[a]; x++)
{
if (accept[x] == '\0')
	return (a);
}
}
return (a);
}
