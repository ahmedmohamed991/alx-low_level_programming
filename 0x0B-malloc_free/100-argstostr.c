#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, x, y = 0, m = 0;
	char *ahmed;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++)
			m++;
	}
	m += ac;

	ahmed = malloc(sizeof(char) * m + 1);
	if (ahmed == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (x = 0; av[i][x]; x++)
	{
		ahmed[y] = av[i][x];
		y++;
	}
	if (ahmed[y] == '\0')
	{
		ahmed[y++] = '\n';
	}
	}
	return (ahmed);
}
