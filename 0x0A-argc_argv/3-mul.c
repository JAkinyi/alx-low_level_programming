#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers passed as arguments to main
 * @argc: number of arguments passed
 * @argv: array containing the arguments
 * Return 1 or 0
 */

int main(int argc, char **argv)
{
	int mul;
	
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", mul);
	return (0);
}
