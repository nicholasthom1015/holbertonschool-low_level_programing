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
	{	printf("$n is positive \n");
	}
	if (n == 0)
	{	printf("$n is zero \n");
	}
	if (n < 0)
	{	printf("$n is negative \n");
	}
	return (0);
}
