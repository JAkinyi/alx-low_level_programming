#include <stdio.h>

/**
 * main - prints name of program followed by a newline
 * @argc: number of variables 
 * @argv: array of variables passed to main
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return 0;
}
