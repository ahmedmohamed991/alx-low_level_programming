#include <stdio.h>
#include <stdlib.h>

/**
*main - adds positive numbers
*@argc: number of arguments
*@argv: array of arguments
*Return: 0 on success, 1 on failure
*/

int main(int argc, char *argv[])
{
	int a, k, sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (k = 0; argv[a][k] != '\0'; k++)
		{
			if (argv[a][k] < '0' || argv[a][k] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[a]);
	}

	printf("%d\n", sum);

	return (0);
}
