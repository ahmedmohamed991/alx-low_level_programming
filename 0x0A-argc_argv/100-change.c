#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min number of coins to make change
 * for an amount of money
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int t, count;
	unsigned int x;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	t = strtol(argv[1], &p, 10);
	count = 0;

	if (!*p)
	{
		while (t > 1)
		{
			for (x = 0; x < sizeof(cents[x]); x++)
			{
				if (t >= cents[x])
				{
					count += t / cents[x];
					t = t % cents[x];
				}
			}
		}
		if (t == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}
