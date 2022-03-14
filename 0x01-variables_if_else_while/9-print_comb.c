#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	while (n < 58)
	{
		putchar(n);
		while (n < 57)
		{
			putchar(',');
			putchar(' ');
		}
    n++;
	}
	putchar('\n');
	return (0);
}
