#include "main.h"
/**
 * factorial - Returns factorial of given number
 * @n: the given number
 * Return: 0
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
