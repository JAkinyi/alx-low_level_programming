#include <stdio.h>

/**
 * main - prints number of arguments passed to main
 * @argc: number of variables
 * @argv: array of string variables
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
