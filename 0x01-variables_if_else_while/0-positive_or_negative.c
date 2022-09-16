#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this depicts if random number given is positive, zero, or negative
 * Return: 0 if intended outcome. Error otherwise
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{	printf("%d is positive \n", n);
	}
	if (n == 0)
	{	printf("%d is zero \n", n);
	}
	if (n < 0)
	{	printf("%d is negative \n", n);
	}
	return (0);
}
