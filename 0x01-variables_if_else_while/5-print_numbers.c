#include <stdio.h>
/**
 * main - print 0-9
 * Return: 0 if intented outcome. Error otherwise
 */

int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");

	return (0);
}
