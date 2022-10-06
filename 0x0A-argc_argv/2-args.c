#include <stdio.h>
/**
 * main - Prints all arguments in program
 * @argc: test character
 * @argv: test character
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
		printf("argv[%2d]; %s\n", counter, argv[counter]);

	return (0);
}
