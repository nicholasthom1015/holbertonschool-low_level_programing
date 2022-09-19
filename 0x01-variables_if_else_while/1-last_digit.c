#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - tells if the last digit is greater than 5, 0, or greater than 6
 * Return: 0 if intended outcome. Error otherwise.
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;
	if (lastDigit > 5)
	{	printf("Last digit of n is lastDigit and is greater than 5\n");
	}
	if (lastDigit == 0)
	{	printf("Last digit of n is lastDigit and is 0\n");
	}
	if (lastDigit < 6)
	{	printf("Last digit of n is lastDigit and is less than 6 and not 0\n");
	}
	return (0);
}
