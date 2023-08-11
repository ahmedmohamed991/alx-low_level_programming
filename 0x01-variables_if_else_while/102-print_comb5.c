#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f, m;

	for (f = 0; f < 100; f++)
	{
		for (m = 0; m < 100; m++)
		{
			if (f < m)
			{
				putchar((f / 10) + 48);
				putchar((f % 10) + 48);
				putchar(' ');
				putchar((m / 10) + 48);
				putchar((m % 10) + 48);
				if (f != 98 || m != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
