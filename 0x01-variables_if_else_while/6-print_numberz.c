#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line, using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l;

	for (l = 48; l < 58; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}

