#include <stdio.h>
#include <stdlib.h>
/**
 * main - add two numbers
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc < '0')
	{
		printf("0\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a + b;

	printf("%d\n", result);

	return (0);
}
